#include "EnterpriseSpace.hpp"
#include <iostream>
#include <limits>
#include <time.h>
using std::numeric_limits;
using std::streamsize;
using std::cin;
using std::cout;
using std::endl;

EnterpriseSpace::EnterpriseSpace(Frodo *Fptr) : Space(Fptr)
{
    space[9][16] = Fptr;
    frodo->setXCoord(9);
    frodo->setYCoord(16);

    gyro = new Gyro;
    space[1][1] = gyro;

    borg = new Borg;
    space[5][5] = borg;
    space[17][25] = borg;
    space[13][11] = borg;
    space[5][15] = borg;
    space[9][5] = borg;
    space[6][25] = borg;
    space[12][18] = borg;
}

EnterpriseSpace::~EnterpriseSpace()
{
    delete borg;
    delete gyro;
    delete sSpace;
}

void EnterpriseSpace::spaceOutput()
{
    //frodo->addItems("SharpStick");
    if (frodo->hasItems("SharpStick") == true)
    {
        space[5][5] = NULL;
        space[17][25] = NULL;
        space[13][11] = NULL;
        space[5][15] = NULL;
        space[9][5] = NULL;
        space[6][25] = NULL;
        space[12][18] = NULL;
        printSpace();
        cout << "\n\tYou made it to the bridge of the USS Enterprise" << endl;
        cout << "\tbut you do not have the Gyro! Go get it!\n" << endl;

        if (frodo->hasItems("Gyro") == true)
        {
            cout << "\n\tYou made it to the bridge of the USS Enterprise" << endl;
            cout << "\tand defeated the Borg with the Sharp Stick of Destiny!" << endl;

            space[9][16] = NULL;
            space[2][2] = frodo;
            printSpace();

            if (system("Pause")) system("read");

            PlayAgain p;
            cout << "\n\tThe Sharp Stick of Destiny was a high powered EMT emitter." << endl;
            cout << "\tThat's why the Borg no longer function. You have the gyro, now couple\n" << endl;
            cout << "\tit with the other..." << endl;

            if (system("Pause")) system("read");

            space[1][1] = NULL;
            frodo->addItems("Gyro");
            printSpace();

            cout <<"\n\tSuperb work Frodo! You made the world right again!!!" << endl;
            p.playAgain();
            exit(0);

        }
        enterpriseOut();
    }
    else
    {
        printSpace();
        cout << "\tYou're surrounded by Borg (@)!!! Quick, enter a number to transport out of there!!! ";
        enterpriseOut();

        clock_t start = clock();
        fibRecTime(42);
        clock_t end1 = clock();
        clock_t timeTaken = end1 - start;
        double time = timeTaken / (double) CLOCKS_PER_SEC;

        cout << "CLOCK TIME = " << time << endl;

        if (time > 1)
        {
            space[9][15] = borg;
            space[8][16] = borg;
            space[9][17] = borg;
            space[10][16] = borg;

            printSpace();
            cout << "\n\tYou're taking too long!! Hurry or you'll be assimilated!\n" << endl;
            enterpriseOut();
        }

        frodo->addItems("BorgChunk");

        sSpace = new StartSpace(frodo);
        currentSpace = sSpace;
        setBottom(currentSpace);
        currentSpace->getBottom();
        //currentSpace->printSpace();
        currentSpace->spaceOutput();


    }
}

void EnterpriseSpace::enterpriseOut()
{
    cout << '\n';

    cout
    << "\n           ________________"
    << "\n          /                \\"
    << "\n         /                  \\"
    << "\n        /                    \\"
    << "\n       |                      |"
    << "\n       |                      |"
    << "\n        \\                    /"
    << "\n         \\                  /"
    << "\n          \\________________/"
    << "\n           /              \\"
    << "\n     ||   /                \\   ||"
    << "\n     ||  /                  \\  ||"
    << "\n     || /                    \\ ||"
    << "\n     ||/                      \\||"
    << "\n     ||                        ||"
    << "\n     ||                        ||"
    << "\n     ||                        ||"
    << "\n     ||                        ||\n";
}

int EnterpriseSpace::fibRecTime(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibRecTime(n - 1) + fibRecTime(n - 2);
}

