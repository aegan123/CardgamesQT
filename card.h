#ifndef CARD_H
#define CARD_H


class Card
{
public:
    Card(unsigned int const, unsigned int const);
    int getRank();
    bool operator==(const Card*);
    bool operator!=(const Card*);
    bool operator<(const Card*);
    bool operator>(const Card*);
private:
    const unsigned int suit;
    const unsigned int rank;
    enum struct suit{HEARTS, CLUBS, DIAMONDS, SPADES};
    enum struct rank{A,II,III,IV,V,VI,VII,VIII,IX,X,J,Q,K};

};

#endif // CARD_H
