#include "Character.hpp"
#include <iostream>
using std::cout;
using std::endl;

Character::Character()
{
    charPtr = ' ';
    itemName = " ";
    strength = 0;
    lives = 0;
}

void Character::setCharPtr(char charP)
{ charPtr = charP; }

char Character::getCharPtr()
{ return charPtr; }

void Character::setThreat(char t)
{ threat = t; }

void Character::setStrength(int st)
{ strength = st; }

int Character::getStrength()
{ return strength; }

void Character::setLives(int lvs)
{ lives = lvs; }

int Character::getLives()
{ return lives; }

void Character::setXCoord(int x)
{ xCoord = x; }

int Character::getXCoord()
{ return xCoord; }

void Character::setYCoord(int y)
{ yCoord = y; }

int Character::getYCoord()
{ return yCoord; }

void Character::attack(Character* c)
{
    cout << "\nThe threat has been eliminated!\n";
    c = NULL;
}

Character::~Character()
{
    //dtor
}
