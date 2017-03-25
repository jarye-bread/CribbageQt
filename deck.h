#ifndef DECK_H
#define DECK_H
#include "card.h"
#include <vector>

class Deck{
private:
    std::vector<Card> _myDeck;
public:
    Card getCard(int pos);
};

#endif // DECK_H
