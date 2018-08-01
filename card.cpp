#include "card.h"

Card::Card(unsigned int const, unsigned int const)
{
    this->rank=rank;
    this->suit=suit;
}
int Card::getRank(){
    return rank;
}
