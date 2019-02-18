#include "GyroRoom.hpp"
#include <iostream>
#include <limits>
#include <time.h>
using std::numeric_limits;
using std::streamsize;
using std::cin;
using std::cout;
using std::endl;

GyroRoom::GyroRoom(Frodo *Fptr) : Space(Fptr)
{
    gyro = new Gyro;
    space[2][32] = gyro;
}

void GyroRoom::spaceOutput()
{
    space[10][1] = frodo;
    printSpace();
    cout << "\n\tLook!!! There's the gyro! Go grab it!\n" << endl;

    if (system("Pause")) system("read");

    space[10][1] = NULL;
    space[5][10] = frodo;
    printSpace();

    if (system("Pause")) system("read");

    space[5][10] = NULL;
    space[3][20] = frodo;
    printSpace();

    if (system("Pause")) system("read");

    space[3][20] = NULL;
    space[2][31] = frodo;
    printSpace();

    if (system("Pause")) system("read");

    frodo->addItems("Gyro");
    space[2][32] = NULL;
    printSpace();

    cout << "\n\tNice work! Now let's go save the Universe!" << endl;

    sSpace = new StartSpace(frodo);
    currentSpace = sSpace;
    setTop(currentSpace);
    currentSpace->getTop();
    currentSpace->spaceOutput();

}

GyroRoom::~GyroRoom()
{
    delete gyro;
}
