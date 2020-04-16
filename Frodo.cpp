#include "Frodo.hpp"
#include <iostream>
#include <string>
#include <stdio.h>
#include <cstdlib>
using std::string;
using std::cout;
using std::endl;

Frodo::Frodo() : Character()
{
    charPtr = 'F';
    strength = 100;
    lives = 3;
    for (int i = 0; i < 4; i++)
        items[i] = " ";
}


void Frodo::addItems(string I)
{
    bool itemAdded = false;
    int i = 0;
    while (itemAdded == false)
    {
        if (items[i] == " ")
        {
            items[i] = I;
            itemAdded = true;
        }
        i++;
    }
}

void Frodo::removeItem(string rI)
{
    for (int i = 0; i < 4; i++)
    {
        if (items[i] == rI)
        items[i] = " ";
    }
}

void Frodo::showItems()
{
    cout << "\n\tItems: ";
    for (int i = 0; i < 4; i++)
    {
        cout << items[i] << " ";
    }
    cout << endl;
}

bool Frodo::hasItems(string hasI)
{
    for (int i = 0; i < 4; i++)
    {
        if (items[i] == hasI)
            return true;
    }
}


void Frodo::attack()
{
    cout << "\n\t  ~~~****ZZZAP****~~~" << endl;
    cout << "\tYou have attacked with your Wand!\n" << endl;
}

void Frodo::endLife()
{
    strength = 0;
    lives = 0;
}
