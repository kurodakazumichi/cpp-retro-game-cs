#include "Common.h"
#include "Deck.h"
#include "Card.h"
#include <iostream>
using namespace std;

Deck::Deck() {}

Deck::Deck(int capacity = 0) {
	mList.reserve(capacity);
}

Deck::~Deck() 
{
	mList.clear();	
}

void Deck::push(Card* card) {
	mList.push_back(card);
}

void Deck::draw() const 
{
	for (auto it = mList.begin(); it != mList.end(); ++it) {
		(*it)->draw();
	}
}

size_t Deck::size() const {
	return mList.size();
}

void Deck::info() const {
	cout << size() << endl;
}

Card* Deck::operator[](unsigned i) const {
	return mList[i];
}