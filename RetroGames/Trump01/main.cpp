#include <iostream>
#include "Card.h"

using namespace std;

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