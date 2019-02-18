#include "StartSpace.hpp"
#include <iostream>
#include <limits>
#include <cstdlib>
using std::numeric_limits;
using std::streamsize;
using std::cin;
using std::cout;
using std::endl;

StartSpace::StartSpace(Frodo *Fptr) : Space(Fptr)
{
    space[5][5] = Fptr;
    //frodo->setXCoord(5);
    //frodo->setYCoord(5);

    item1 = new Wand;
    space[15][15] = item1;

    //Tops of the trees
    itemTree = new Trees;
    space[10][3] = itemTree;
    space[11][3] = itemTree;
    space[12][3] = itemTree;
    space[6][12] = itemTree;
    space[7][12] = itemTree;
    space[1][16] = itemTree;
    space[2][16] = itemTree;
    space[3][16] = itemTree;
    space[1][1] = itemTree;
    space[2][1] = itemTree;
    space[15][8] = itemTree;
    space[16][8] = itemTree;
    space[17][8] = itemTree;
    space[8][6] = itemTree;
    space[9][6] = itemTree;
    space[10][6] = itemTree;
    space[3][23] = itemTree;
    space[4][23] = itemTree;
    space[5][23] = itemTree;
    space[2][25] = itemTree;
    space[3][25] = itemTree;
    space[8][21] = itemTree;
    space[9][21] = itemTree;
    space[10][21] = itemTree;
    space[9][27] = itemTree;
    space[10][27] = itemTree;
    space[11][27] = itemTree;
    space[11][30] = itemTree;
    space[12][30] = itemTree;
    space[14][22] = itemTree;
    space[15][22] = itemTree;
    space[16][22] = itemTree;

    //Trunks of the trees
    itemTrunk = new TreeTrunk;
    space [13][3] = itemTrunk;
    space[8][12] = itemTrunk;
    space[3][1] = itemTrunk;
    space[18][8] = itemTrunk;
    space[11][6] = itemTrunk;
    space[6][23] = itemTrunk;
    space[4][25] = itemTrunk;
    space[10][21] = itemTrunk;
    space[12][27] = itemTrunk;
    space[13][30] = itemTrunk;
    space[17][22] = itemTrunk;



    //Paths for character to get wand
    highPath = new Paths;
    space[4][5] = highPath;
    //space[4][6] = highPath;
    space[4][7] = highPath;
   // space[4][8] = highPath;
    space[4][9] = highPath;
    //space[4][10] = highPath;
    space[4][11] = highPath;
   // space[4][12] = highPath;
    space[4][13] = highPath;
   // space[4][14] = highPath;
    space[4][15] = highPath;
    space[5][16] = highPath;
   // space[5][17] = highPath;
    space[5][18] = highPath;
   // space[5][19] = highPath;
    space[6][18] = highPath;
    space[7][18] = highPath;
    space[8][18] = highPath;
    space[9][18] = highPath;
    space[10][17] = highPath;
    space[11][17] = highPath;
    space[12][17] = highPath;
    space[13][17] = highPath;
    space[14][17] = highPath;
    //space[14][15] = highPath;


    midPath = new Paths2;
    space[5][6] = midPath;
    //space[5][7] = midPath;
    space[5][8] = midPath;
    space[6][8] = midPath;
    space[7][8] = midPath;
    space[8][8] = midPath;
    space[9][9] = midPath;
    space[9][11] = midPath;
    space[10][11] = midPath;
    //space[10][12] = midPath;
    space[10][13] = midPath;
    space[11][13] = midPath;
    space[12][13] = midPath;
    space[13][13] = midPath;
    space[14][13] = midPath;
    space[15][13] = midPath;
    //space[15][14] = midPath;

    lowPath = new Paths3;
    space[5][4] = lowPath;
    //space[5][3] = lowPath;
    space[5][2] = lowPath;
    space[6][2] = lowPath;
    space[7][2] = lowPath;
    space[8][2] = lowPath;
    space[9][2] = lowPath;
    space[10][2] = lowPath;
    space[11][2] = lowPath;
    space[12][2] = lowPath;
    space[13][2] = lowPath;
    space[14][2] = lowPath;
    space[15][2] = lowPath;
    space[16][3] = lowPath;
    space[17][4] = lowPath;
    space[16][5] = lowPath;
    space[15][6] = lowPath;
    space[14][7] = lowPath;
   // space[14][8] = lowPath;
    space[14][9] = lowPath;
    space[15][10] = lowPath;
    space[16][11] = lowPath;
    space[17][12] = lowPath;
    //space[17][13] = lowPath;
    space[17][14] = lowPath;
   // space[17][15] = lowPath;
    space[17][16] = lowPath;
    //space[17][17] = lowPath;
    space[16][17] = lowPath;
    space[15][17] = lowPath;
    //space[15][16] = lowPath;

    //Orc declaration
    orc = new Orc;

    //Wind of Echoes
    wind = new WindOfEchos;




}


//Begin game in start space
void StartSpace::spaceOutput()
{
    PlayAgain p;
    int pathChoice;

    while (frodo->hasItems("Wand") == false)
    {
        cout << "\n\tFrodo(F), you must make your way through the forest to get the magic wand (/)!" << endl;
        cout << "\tThere are three paths you may choose to take...choose wisely." << endl;
        cout << "\t1.\tHigh Path (o)\n";
        cout << "\t2.\tMiddle Path (*)\n";
        cout << "\t3.\tLower Path (x)\n";
        cout << "\tEnter 1, 2, or 3.\n";
        cin >> pathChoice;
        while (!(pathChoice == 1 || pathChoice == 2 || pathChoice == 3))
        {
            cout << "Invalid Choice\n" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin >> pathChoice;
        }


        if (pathChoice == 1)
        {
        //  delete highPath;


            space[6][18] = orc;
            space[5][5] = highPath;
            space[5][18] = frodo;

            frodo->setStrength(95);
            printSpace();


            cout << "\n\tOh no!!! You ran into an Orc (Q) and he attacked!" << endl;
            cout << "\tYou you are down to " << frodo->getStrength() << " strength!\n" << endl;
            cout << "\tYou have the option to attack or flee." << endl;
            cout << "\tIf you choose to flee you will lose more strength," << endl;
            cout << "\thowever, if you attack there is a one out of four chance you will " << endl;
            cout << "\tlose your life!...but if you make it you will be rewarded.\n" << endl;
            cout << "\tMake your choice: " << endl;
            cout << "\t1.   Flee" << endl;
            cout << "\t2.   Attack" << endl;
            int fleeAttck;
            cin >> fleeAttck;
            while (!(fleeAttck == 1 || fleeAttck == 2))
            {
                cout << "Invalid Choice\n" << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cin >> fleeAttck;
            }

            if (fleeAttck == 1)
            {
                frodo->addItems("Wand");
                frodo->setStrength(40);
                space[5][5] = highPath;
                space[6][18] = highPath;
                space[5][18] = highPath;
                space[15][15] = frodo;
                printSpace();
                cout << "\n\tYou have chosen to flee. For your cowardice, your " << endl;
                cout << "\tstrength is now " << frodo->getStrength() << "!\n" << endl;
                cout << "\tHowever, you did scurry to the wand like a frightened rat, " << endl;
                cout << "\tso you will be allowed to continue.\n" << endl;

            }


            if (fleeAttck == 2)
            {
                cout << "\n\tHand to hand with an Orc!\n" << endl;

                if (system("Pause")) system("read");

                RandNum rm;
                int death = rm.randomNum();
                if (death == 3)
                {
                    frodo->setLives(0);
                    cout << "\n\tYou did not make it Frodo. Your game is over." << endl;

                    p.playAgain();
                    delete sSpace;
                }
                else
                {
                    frodo->addItems("Wand");
                    frodo->setStrength(100);
                    space[5][5] = highPath;
                    space[6][18] = highPath;
                    space[5][18] = highPath;
                    space[15][15] = frodo;
                    printSpace();
                    cout << "\n\tYou made it!!! The wand is yours!! and your strength has returned!" << endl;
                }
            }
        }


        else if (pathChoice == 2)
        {
            frodo->addItems("Wand");
            frodo->setStrength(50);
            space[5][5] = midPath;
            space[6][18] = midPath;
            space[5][18] = midPath;
            space[15][15] = frodo;

            space[9][11] = wind;
            space[9][12] = wind;
            space[10][11] = wind;
            space[10][12] = wind;
            space[10][13] = wind;
            space[10][14] = wind;
            space[11][10] = wind;
            space[11][11] = wind;
            space[11][12] = wind;
            space[11][13] = wind;
            space[12][11] = wind;
            space[12][12] = wind;
            space[12][13] = wind;
            space[12][14] = wind;
            space[12][15] = wind;
            space[13][13] = wind;
            space[13][14] = wind;

            printSpace();
            cout << "\n\tThe middle path was not wise to take. You made it, but " << endl;
            cout << "\tjust barely. The shortest distance is not always the easiest." << endl;
            cout << "\tYou encountered the storm of a thousand echoes (~)." << endl;
        }


        else if (pathChoice == 3)
        {
            frodo->addItems("Wand");
            space[5][5] = midPath;
            space[6][18] = lowPath;
            space[5][18] = lowPath;
            space[15][15] = frodo;
            printSpace();
            cout << "\n\tSometimes the longest path is the shortest way. " << endl;
            cout << "\tYou chose wisely and received the wand with no peril.\n" << endl;
        }
    }
    if (system("Pause")) system("read");

    /*cout << "\nEnter a number to continue: ";
    cout << '\n';
    int cont;
    while (!(cin >> cont))
    {
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout << "Invalid, enter integer.\n" << endl;
    }*/

    //clear the space, except for trees and Frodo
    space[4][5] = NULL;
    space[4][7] = NULL;
    space[4][9] = NULL;
    space[4][11] = NULL;
    space[4][13] = NULL;
    space[4][15] = NULL;
    space[5][16] = NULL;
    space[5][18] = NULL;
    space[6][18] = NULL;
    space[7][18] = NULL;
    space[8][18] = NULL;
    space[9][18] = NULL;
    space[10][17] = NULL;
    space[11][17] = NULL;
    space[12][17] = NULL;
    space[13][17] = NULL;
    space[14][17] = NULL;
    //space[5][5] = NULL;
    space[5][6] = NULL;
    space[5][8] = NULL;
    space[6][8] = NULL;
    space[7][8] = NULL;
    space[8][8] = NULL;
    space[9][9] = NULL;
    space[9][11] = NULL;
    space[10][11] = NULL;
    space[10][13] = NULL;
    space[11][13] = NULL;
    space[12][13] = NULL;
    space[13][13] = NULL;
    space[14][13] = NULL;
    space[15][13] = NULL;
    space[5][4] = NULL;
    space[5][2] = NULL;
    space[6][2] = NULL;
    space[7][2] = NULL;
    space[8][2] = NULL;
    space[9][2] = NULL;
    space[10][2] = NULL;
    space[11][2] = NULL;
    space[12][2] = NULL;
    space[13][2] = NULL;
    space[14][2] = NULL;
    space[15][2] = NULL;
    space[16][3] = NULL;
    space[17][4] = NULL;
    space[16][5] = NULL;
    space[15][6] = NULL;
    space[14][7] = NULL;
    space[14][9] = NULL;
    space[15][10] = NULL;
    space[16][11] = NULL;
    space[17][12] = NULL;
    space[17][14] = NULL;
    space[17][16] = NULL;
    space[16][17] = NULL;
    space[15][17] = NULL;
    space[9][11] = NULL;
    space[9][12] = NULL;
    space[10][11] = NULL;
    space[10][12] = NULL;
    space[10][13] = NULL;
    space[10][14] = NULL;
    space[11][10] = NULL;
    space[11][11] = NULL;
    space[11][12] = NULL;
    space[11][13] = NULL;
    space[12][11] = NULL;
    space[12][12] = NULL;
    space[12][13] = NULL;
    space[12][14] = NULL;
    space[12][15] = NULL;
    space[13][13] = NULL;
    space[13][14] = NULL;



    //Gateways
    space[4][16] = midPath;
    space[6][1] = orc;
    space[1][33] = highPath;

    if (frodo->hasItems("BorgChunk") == true)
    {
        cout << "\n\tYou must find the Sharp Stick of Destiny." << endl;
        cout << "\tIt is a magical omen and the only thing to defeat the Borg." << endl;
        cout << "\tLooks like you managed to grab a piece of Borg technology" << endl;
        cout << "\twhile on the bridge of the Enterprise! Might come in handy." << endl;

        if (system("Pause")) system("read");
        /*cout << "\nEnter a number to continue: ";
        cout << '\n';
        int cont;
        while (!(cin >> cont))
        {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "Invalid, enter integer.\n" << endl;
        }*/
    }

    space[15][15] = NULL;
    space[5][5] = NULL;
    space[15][15] = frodo;

    printSpace();
    cout << "\n\tUse your wand to transport instantly." << endl;
    cout << "\tIt is imperative that you continue on to find the gyro." << endl;
    cout << "\n\tYou must choose a gateway.";

    cout << "\n\t1.  The tree with no trunk (*)" << endl;
    cout << "\t2.  The eye of the Orc (Q)" << endl;
    cout << "\t3.  The rock of infinity (0)" << endl;
    int gateChoice;
    cin >> gateChoice;
    while (!(gateChoice == 1 || gateChoice == 2 || gateChoice == 3))
    {
        cout << "Invalid Choice\n" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> gateChoice;
    }

    if (gateChoice == 1 && frodo->hasItems("BorgChunk") == false)
    {
        entSpace = new EnterpriseSpace(frodo);
        currentSpace = entSpace;
        setTop(currentSpace);
        currentSpace->getTop();
        //currentSpace->printSpace();
        currentSpace->spaceOutput();
    }
    else if (gateChoice == 1 && frodo->hasItems("BorgChunk") == true)
    {
        cout << "\n\tThe Enterprise has locked you out!" << endl;
        cout << "\tYou cannot transport there until you get the Sharp Stick of Destiny.\n" << endl;
        spaceOutput();
    }


    if (gateChoice == 2 && frodo->hasItems("SharpStick") == false)
    {
        swampSpace = new FireSwampSpace(frodo);
        currentSpace = swampSpace;
        setLeft(currentSpace);
        currentSpace->getLeft();
        //currentSpace->printSpace();
        currentSpace->spaceOutput();
    }
    else if (gateChoice == 2 && frodo->hasItems("SharpStick") == true)
    {
        cout << "\n\tYou have already received the gift of the Kangaroo ROUS Lord!\n" << endl;
        spaceOutput();
    }

    if (gateChoice == 3 && frodo->hasItems("Gyro") == false)
    {
        gyroSpace = new GyroRoom(frodo);
        currentSpace = gyroSpace;
        setLeft(currentSpace);
        currentSpace->getLeft();
        currentSpace->spaceOutput();
    }
    else
    {
        cout << "\n\tYou already have the Gyro.\n" << endl;
        spaceOutput();
    }

}


StartSpace::~StartSpace()
{
    delete item1;
    delete itemTree;
    delete itemTrunk;
    delete highPath;
    delete midPath;
    delete lowPath;
    delete orc;
    delete wind;
    delete entSpace;
    delete swampSpace;
    delete gyroSpace;
}
