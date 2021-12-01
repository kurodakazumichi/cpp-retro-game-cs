#pragma once

#include "Mark.h"

// トランプのカードクラス
class Card {
public:
	// コンストラクタ
	Card();

	// setter, getter
	void mark(Mark);
	Mark mark() const;
	void no(int no);
	int no() const;

	void draw() const;

private:
	Mark mMark; // トランプのマーク
	int mNo;          // トランプの数字
};