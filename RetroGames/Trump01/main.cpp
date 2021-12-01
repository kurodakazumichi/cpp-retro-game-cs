#include <iostream>
#include "Card.h"
#include "Deck.h"

using namespace std;

#define CREATE_DECK

#ifdef CREATE_CARD

int main() 
{
	// カードを1枚用意(デフォルトはジョーカー)
	Card card;
	card.draw();
	cout << endl;

	// カードをハートの1にする
	card.mark(Mark::HEART);
	card.no(1);
	card.draw();
	cout << endl;

	// ダイヤの11
	card.mark(Mark::DIAMOND);
	card.no(11);
	card.draw();
	cout << endl;

	// クローバーの6
	card.mark(Mark::CLOVER);
	card.no(6);
	card.draw();
	cout << endl;

	return 0;
}

#endif

#ifdef CREATE_DECK

int main() {

	// デッキ生成
	Deck deck;

	// 52枚のトランプを作る
	for (int i = 0; i < 52; ++i) 
	{
		// トランプのマークと数字
		Mark m = static_cast<Mark>(i / 13);
		int no = (i % 13) + 1;

		// デッキにカードを追加
		deck.push(new Card(m, no));
	}

	// カードを13枚ずつ並べて表示
	for (int i = 0; i < 52; ++i) 
	{
		if (i % 13 == 0) {
			cout << endl;
		}

		deck[i]->draw();
	}
	
	return 0;
}

#endif