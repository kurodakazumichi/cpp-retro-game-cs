#include "Card.h"
#include <iostream>
#include <algorithm>
using namespace std;

// デフォルトコンストラクタ
Card::Card()
	: mMark(Mark::NONE)
	, mNo(0)
{}

void Card::mark(Mark mark) {
	mMark = mark;
}

Mark Card::mark() const {
	return mMark;
}

void Card::no(int no) {
	no = max(no, 0);
	no = min(no, 13);
	mNo = no;
}

int Card::no() const {
	return mNo;
}

// 描画
// Mark = NONE, mNo = 0はジョーカー扱い
void Card::draw() const 
{
	cout << "[";

	switch (mMark) {
		case Mark::HEART  : cout << "H"; break;
		case Mark::DIAMOND: cout << "D"; break;
		case Mark::CLOVER : cout << "C"; break;
		case Mark::SPADES : cout << "S"; break;
		default: cout << "JK"; break;
	}

	switch (mNo) {
		case 0 : break;
		case 10: cout << "X"; break;
		case 11: cout << "J"; break;
		case 12: cout << "Q"; break;
		case 13: cout << "K"; break;
		default: cout << mNo; break;
	}

	cout << "]";
}