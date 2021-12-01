#pragma once

#include "Mark.h"

// トランプのカードクラス
class Card {
public:
	// コンストラクタ
	Card();

	// マーク、数字指定コンストラクタ
	Card(Mark, int);

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