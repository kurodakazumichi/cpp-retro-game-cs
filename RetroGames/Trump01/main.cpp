#include <iostream>
#include "Card.h"

using namespace std;

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