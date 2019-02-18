#include "MinionLair.hpp"
#include <iostream>
#include <limits>
#include <time.h>
using std::numeric_limits;
using std::streamsize;
using std::cin;
using std::cout;
using std::endl;

MinionLair::MinionLair(Frodo *Fptr) : Space(Fptr)
{
    rous = new Rous;

    for (int rows = 1; rows < 19; rows++)
    {
        for (int cols = 10; cols < 34; cols++)
        {
            space[rows][cols] = rous;
        }
        cout << '\n';
    }
    cout << '\n';
}

void MinionLair::spaceOutput()
{
    space[10][1] = frodo;

    rous2 = new Rous2;
    sharpstick = new SharpStick;

    space[10][7] = sharpstick;
    space[10][8] = rous2;

    printSpace();
    cout << "\n\tThe Kagaroo ROUS lord and the minion army would" << endl;
    cout << "\tlike to honor you for your bravery with the Sharp Stick of Destiny." << endl;
    cout << "\tIt is an omen that possesses magical powers that may" << endl;
    cout << "\thelp you on your journey.\n" << endl;
    cout << "\n\tIt is customary for the minion army to face away from those" << endl;
    cout << "\tthat have earned their respect.\n" << endl;

    if (system("Pause")) system("read");

    space[10][1] = NULL;
    space[10][7] = NULL;
    space[10][6] = frodo;

    frodo->addItems("SharpStick");
    printSpace();

    cout << "\n\tThis portal has recently opened in our land. We do" << endl;
    cout << "\tnot know where it leads, however, you may find that it" << endl;
    cout << "\tspeeds up your journey. Good luck Frodo!\n" << endl;

    treeTrunk = new TreeTrunk;
    space[1][3] = treeTrunk;
    space[2][3] = treeTrunk;
    space[1][1] = treeTrunk;
    space[2][1] = treeTrunk;
    printSpace();

    if (system("Pause")) system("read");
    space[10][6] = NULL;
    space[1][2] = frodo;
    printSpace();

    if (system("Pause")) system("read");

    passRoomSpace = new PassRoom(frodo);
    currentSpace = passRoomSpace;
    setTop(currentSpace);
    currentSpace->getTop();
    currentSpace->spaceOutput();


}

void MinionLair::minLairOut()
{
     cout
    << "\n        ^     __"
    << "\n        \\    /  \\  _()"
    << "\n         \\--/    \\/ '>"
    << "\n             \\_   \|_/"
    << "\n              \\\\__/|_"
    << "\n                  \\__";
    cout << '\n';
}

MinionLair::~MinionLair()
{
    delete rous;
    delete rous2;
    delete sharpstick;
    delete treeTrunk;
    delete passRoomSpace;
}


