#include "player.h"
#include "card.h"
#include <string>
#include <vector>

Player::Player(int i)
{
    playerNum=i;
    std::vector <Card> hand;
    points=0;
}
//********
//Getters*
//********
std::string* Player::getName()
{
    return &name;
}
int Player::getPoints()
{
    return points;
}
Card* Player::getCard(int i)
{
    return &hand.at(i);
}
bool Player::isMyTurn()
{
    return myTurn;
}
int Player::getPlayerNum()
{
    return playerNum;
}
//********
//Setters*
//********
void Player::setMyTurn(bool myTurn)
{
    this->myTurn=myTurn;
}
void Player::setName(const std::string &name)
{
    this->name=name;
}
void Player::setPoints(const int points)
{
    this->points=points;
}
//************************
//Hand handling functions*
//************************
void Player::addCard(Card& newCard)
{
    hand.push_back(newCard);
}
void Player::changeCard(int i, Card* newCard)
{
//    hand.at(i)=newCard;
}
void Player::removeCard(int i)
{
    hand.erase(hand.begin()+i);
}
void Player::emptyHand()
{
    hand.clear();
}
int Player::getNumOfCard()
{
    return hand.size();
}
//*******
//Others*
//*******
bool Player::operator==(const Player& player)
{
    return false;
}
