#include <iostream>
#include "Card.h"
#include "Deck.h"

using namespace std;

#define CREATE_DECK

#ifdef CREATE_CARD

int main() 
{
	// �J�[�h��1���p��(�f�t�H���g�̓W���[�J�[)
	Card card;
	card.draw();
	cout << endl;

	// �J�[�h���n�[�g��1�ɂ���
	card.mark(Mark::HEART);
	card.no(1);
	card.draw();
	cout << endl;

	// �_�C����11
	card.mark(Mark::DIAMOND);
	card.no(11);
	card.draw();
	cout << endl;

	// �N���[�o�[��6
	card.mark(Mark::CLOVER);
	card.no(6);
	card.draw();
	cout << endl;

	return 0;
}

#endif

#ifdef CREATE_DECK

int main() {

	// �f�b�L����
	Deck deck;

	// 52���̃g�����v�����
	for (int i = 0; i < 52; ++i) 
	{
		// �g�����v�̃}�[�N�Ɛ���
		Mark m = static_cast<Mark>(i / 13);
		int no = (i % 13) + 1;

		// �f�b�L�ɃJ�[�h��ǉ�
		deck.push(new Card(m, no));
	}

	// �J�[�h��13�������ׂĕ\��
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