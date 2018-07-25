#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include <vector>
#include "card.h"

class Player
{
public:
    Player(int);
    std::string *getName();
    int getPoints();
    Card *getCard(int);
    bool isMyTurn();
    int getPlayerNum();
    void setMyTurn(bool);
    void setName(const std::string&);
    void setPoints(int);
    void addCard(Card&);
    void changeCard(int, Card*);
    void removeCard(int);
    void emptyHand();
    int getNumOfCard();
    bool operator==(const Player&);
    ~Player();


private:
    std::string name;
    unsigned int points;
    unsigned int playerNum;
    bool myTurn;
    std::vector<Card> hand;
//    Player(Player::Player);

};

#endif // PLAYER_H
