#include "Space.hpp"
#include <iostream>
#include <limits>
using std::numeric_limits;
using std::streamsize;
using std::cin;
using std::cout;
using std::endl;

Space::Space(Frodo *Fptr)
{
    frodo = Fptr;
    rows = 20;
    cols = 35;

    //Declare new space
    space = new Character**[rows];
    for (int i = 0; i < rows; i++)
        space[i] = new Character*[cols];


    //Initialize space to null
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            space[i][j] = NULL;
        }
    }


    //Edge cases of space
    edgePath = new Edges;
    for (int i = 0; i < rows; i++)
    {
        space[i][0] = edgePath;
        space[i][cols - 1] = edgePath;
    }
    for (int j = 0; j < cols; j++)
    {
        space[0][j] = edgePath;
        space[rows - 1][j] = edgePath;
    }
}


Space::~Space()
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            delete space[i][j];
        }
        delete [] space[i];
    }
    delete [] space;
    delete edgePath;
}


void Space::printSpace()
{
    if (system( "cls" )) system( "clear" );

    for (int i = 0; i < 10; i++)
        cout << '\n';

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (space[i][j] == NULL)
            {
                cout << ' ';
            }
            else
            {
                cout << space[i][j]->getCharPtr();
            }

        }
        cout << '\n';
    }
    cout << '\n';

    frodo->showItems();
    cout << "\tStrength: " << frodo->getStrength() << endl;
}


void Space::spaceOutput()
{
    cout << "Output from Space class (parent)" << endl;
}

void Space::setIsTop(bool T)
{ isTop = T; }

bool Space::getIsTop()
{ return isTop; }

void Space::setIsRight(bool R)
{ isRight = R; }

bool Space::getIsRight()
{ return isRight; }

void Space::setIsLeft(bool L)
{ isLeft = L; }

bool Space::getIsLeft()
{ return isLeft; }

void Space::setIsBottom(bool B)
{ isBottom = B; }

bool Space::getIsBottom()
{ return isBottom; }



void Space::setTop(Space* t)
{ top = t; }

Space* Space::getTop()
{ return top; }

void Space::setBottom(Space* b)
{ bottom = b; }

Space* Space::getBottom()
{ return bottom; }

void Space::setRight(Space* r)
{ right = r; }

Space* Space::getRight()
{ return right; }

void Space::setLeft(Space* l)
{ left = l; }

Space* Space::getLeft()
{ return left; }

/*void Space::moveFrodo()
{
    int moveIn;
    while (!(moveIn == 8 || moveIn == 5 || moveIn == 4 || moveIn == 6))
    {
        cout << "Invalid Choice\n" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> moveIn;
    }

    switch (moveIn)
    {
        //Move Frodo up
        case 8: if (frodo->getXCoord() > 0)
        {
            if (space[frodo->getXCoord() - 1][frodo->getYCoord()] == NULL)
            {
                space[frodo->getXCoord() - 1][frodo->getYCoord()] = frodo;
                space[frodo->getXCoord()][frodo->getYCoord()] = NULL;
                frodo->setXCoord(frodo->getXCoord() - 1);
            }
        }
        break;

        //Move Frodo down
        case 5: if (frodo->getXCoord() < rows - 1)
        {
            if (space[frodo->getXCoord() + 1][frodo->getYCoord()] == NULL)
            {
                space[frodo->getXCoord() + 1][frodo->getYCoord()] = frodo;
                space[frodo->getXCoord()][frodo->getYCoord()] = NULL;
                frodo->setXCoord(frodo->getXCoord() + 1);
            }
        }
        break;

        //Move Frodo left
        //case 4:
    }
}*/
