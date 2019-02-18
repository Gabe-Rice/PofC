#include "FireSwampSpace.hpp"
#include <iostream>
#include <limits>
#include <time.h>
using std::numeric_limits;
using std::streamsize;
using std::cin;
using std::cout;
using std::endl;

FireSwampSpace::FireSwampSpace(Frodo *Fptr) : Space(Fptr)
{
    space[9][33] = Fptr;
    frodo->setXCoord(9);
    frodo->setYCoord(33);

    rous = new Rous;
    space[7][32] = rous;
    space[9][30] = rous;
    space[9][32] = rous;
    space[8][33] = rous;
    space[10][33] = rous;
    space[10][29] = rous;


    midPath = new Paths2;

    //Tops of the trees
    itemTree = new Trees;
    space[10][3] = itemTree;
    space[11][3] = midPath;
    space[12][3] = midPath;
    space[6][12] = itemTree;
    space[7][12] = midPath;
    space[1][16] = itemTree;
    space[2][16] = midPath;
    space[3][16] = midPath;
    space[1][1] = itemTree;
    space[2][1] = midPath;
    space[15][8] = itemTree;
    space[16][8] = midPath;
    space[17][8] = midPath;
    space[8][6] = itemTree;
    space[9][6] = midPath;
    space[10][6] = midPath;
    space[3][23] = itemTree;
    space[4][23] = midPath;
    space[5][23] = midPath;
    space[2][25] = itemTree;
    space[3][25] = midPath;
    space[8][21] = itemTree;
    space[9][21] = midPath;
    space[10][21] = midPath;
    space[9][27] = itemTree;
    space[10][27] = midPath;
    space[11][27] = midPath;
    space[11][30] = itemTree;
    space[12][30] = midPath;
    space[14][22] = itemTree;
    space[15][22] = midPath;
    space[16][22] = midPath;

    //Trunks of the trees
    itemTrunk = new TreeTrunk;
    space [13][3] = itemTrunk;
    space[8][12] = itemTrunk;
    space[3][1] = itemTrunk;
    space[4][16] = itemTrunk;
    space[18][8] = itemTrunk;
    space[11][6] = itemTrunk;
    space[6][23] = itemTrunk;
    space[4][25] = itemTrunk;
    space[10][21] = itemTrunk;
    space[12][27] = itemTrunk;
    space[13][30] = itemTrunk;
    space[17][22] = itemTrunk;

    //ROUS
}

FireSwampSpace::~FireSwampSpace()
{
    delete itemTree;
    delete itemTrunk;
    delete midPath;
    delete rous;
    delete minSpace;
    delete borg;
}

void FireSwampSpace::spaceOutput()
{
    borg = new Borg;
    space[9][16] = borg;

    printSpace();
    fireSwampOut();

    cout << "\n\tOh no! You've entered the Fire Swamp...realm" << endl;
    cout << "\tof the Kangaroo R.O.U.S.! The Kangaroo rous lord is" << endl;
    cout << "\tsending his minions (>) to destroy you!!!\n" << endl;
    cout << "\tAttack!!!\n" << endl;
    if (system("Pause")) system("read");

    frodo->attack();
    frodo->setStrength(frodo->getStrength() - 10);

    space[9][32] = NULL;
    printSpace();
    fireSwampOut();
    cout << "\n\tAttack again!!!\n" << endl;
    if (system("Pause")) system("read");

    frodo->attack();
    frodo->setStrength(frodo->getStrength() - 10);

    space[8][33] = NULL;
    printSpace();
    fireSwampOut();
    cout << "\n\tAttack again!!!\n" << endl;
    if (system("Pause")) system("read");

    frodo->attack();
    frodo->setStrength(frodo->getStrength() - 10);

    space[10][33] = NULL;
    space[7][32] = NULL;
    space[9][30] = NULL;
    space[10][29] = NULL;
    space[9][33] = NULL;

    if (frodo->hasItems("BorgChunk") == false)
    {
        frodo->addItems("BorgChunk");
        space[9][16] = NULL;
        cout << "\n\tLooks like you fount a Borg piece...curious.\n" << endl;
        if (system("Pause")) system("read");
    }
    space[10][16] = frodo;
    printSpace();
    fireSwampOut();
    cout << "\n\tWell done Frodo! You defeated the minions" << endl;
    cout << "\tand sent the rest to run and hide!\n" << endl;
    cout << "\tHowever, your strength is waning." << endl;
    cout << "\n\tThe Kangaroorous lord has left you a gift." << endl;
    cout << "\tYou must enter his lair.\n" << endl;

    if (system("Pause")) system("read");

    space[2][33] = midPath;
    space[2][32] = midPath;
    space[2][31] = midPath;
    space[2][30] = midPath;

    space[1][33] = midPath;
    space[1][32] = midPath;
    space[1][31] = midPath;
    space[1][30] = midPath;

    space[4][33] = midPath;
    space[4][32] = midPath;
    space[4][31] = midPath;
    space[4][30] = midPath;

    space[5][33] = midPath;
    space[5][32] = midPath;
    space[5][31] = midPath;
    space[5][30] = midPath;


    printSpace();
    fireSwampOut();

    if (system("Pause")) system("read");

    space[10][16] = NULL;
    space[3][31] = frodo;
    printSpace();
    fireSwampOut();

    if (system("Pause")) system("read");

    minSpace = new MinionLair(frodo);
    currentSpace = minSpace;
    setRight(currentSpace);
    currentSpace->getRight();
    currentSpace->spaceOutput();

}

void FireSwampSpace::fireSwampOut()
{

    cout
    << "\n        ^     __"
    << "\n        \\    /  \\  _()"
    << "\n         \\--/    \\/ '>"
    << "\n             \\_   \\|_/"
    << "\n              \\\\__/|_"
    << "\n                  \\__";
    cout << '\n';
}
