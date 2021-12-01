#pragma once
#include <vector>

class Card;

class Deck {
public:
	Deck();
	Deck(int capacity);
	~Deck();

	void push(Card*);
	void draw() const;
	void info() const;

	Card* operator[](unsigned i) const;

	size_t size() const;
private:
	std::vector<Card*> mList;
};