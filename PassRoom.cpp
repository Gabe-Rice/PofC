#include "PassRoom.hpp"
#include <iostream>
#include <limits>
#include <time.h>
#include <cstdlib>
using std::numeric_limits;
using std::streamsize;
using std::cin;
using std::cout;
using std::endl;

PassRoom::PassRoom(Frodo *Fptr) : Space(Fptr)
{
    fire = new Paths2;
    rous2 = new Rous2;

    for (int rows = 1; rows < 16; rows++)
    {
        for (int cols = 1; cols < 34; cols++)
        {
            space[rows][cols] = fire;
        }
        cout << '\n';
    }
    cout << '\n';
}

void PassRoom::spaceOutput()
{
    space[17][1] = frodo;
    printSpace();
    cout << "\n\tBe wary and travel quick. This is the Fire land.\n" << endl;


    space[17][1] = NULL;
    space[17][10] = frodo;
    printSpace();


    space[17][10] = NULL;
    space[17][20] = frodo;
    printSpace();


    space[17][20] = NULL;
    space[17][30] = frodo;
    space[17][34] = fire;
    space[17][33] = fire;
    space[17][32] = fire;
    space[17][31] = rous2;
    printSpace();
    cout << "\n\tThe fire wraith has stopped you in your tracks!" << endl;
    cout << "\tHe will let you pass in exchange for the Borg piece" << endl;
    cout << "\tyou have collected. Do not ask what his use for it will be." << endl;
    cout << "\tBe happy you are allowed to pass unscathed.\n" << endl;
    cout << "\tHe will send you to another land, but he cannot be certain where.\n" << endl;


    frodo->removeItem("BorgChunk");
    space[18][29] = fire;
    space[18][31] = fire;
    space[17][30] = NULL;
    space[18][30] = frodo;

    printSpace();

    sSpace = new StartSpace(frodo);
    currentSpace = sSpace;
    setBottom(currentSpace);
    currentSpace->getBottom();
    currentSpace->spaceOutput();

}

PassRoom::~PassRoom()
{
    delete fire;
    delete rous2;
    delete sSpace;
}
