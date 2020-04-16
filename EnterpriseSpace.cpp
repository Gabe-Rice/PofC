#include "EnterpriseSpace.hpp"
#include <iostream>
#include <limits>
#include <time.h>
#include <stdio.h>
using std::numeric_limits;
using std::streamsize;
using std::cin;
using std::cout;
using std::endl;

PlayAgain p;

//timer function
void timer(int seconds)
{
    int stime = time(NULL);
    while(1)
    {
        if (time(NULL) - stime == seconds)
            break;
    }
}

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
    //If frodo has sharpstick and the gyro, win!
	if (frodo->hasItems("SharpStick") == true && frodo->hasItems("Gyro") == true)
	{
		enterpriseOut();
		cout << "\n\tYou made it to the bridge of the USS Enterprise" << endl;
        cout << "\tand defeated the Borg with the Sharp Stick of Destiny!" << endl;
		while (1)
		{
			char ch;
			ch = getchar();
			if (ch == 0x0A)
				break;
		}

        space[9][16] = NULL;
        space[2][2] = frodo;
        printSpace();


           cout << "\n\tThe Sharp Stick of Destiny was a high powered EMT emitter." << endl;
           cout << "\tThat's why the Borg no longer function. You have the gyro, now couple" << endl;
           cout << "\tit with the other..." << endl;


        space[1][1] = NULL;
        frodo->addItems("Gyro");
        printSpace();

        cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "\n\t ~ Superb work Frodo! You made the world right again!!! ~ " << endl;
        cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		enterpriseOut();
        p.playAgain();
	}

    else if (frodo->hasItems("SharpStick") == true)
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
		enterpriseOut();

		sSpace = new StartSpace(frodo);
        currentSpace = sSpace;
        setBottom(currentSpace);
        currentSpace->getBottom();
        //currentSpace->printSpace();
        currentSpace->spaceOutput();
	}

    else
    {
        printSpace();
        cout << "\tYou're surrounded by Borg (@)!!! You need to transport out of there!!! ";
        enterpriseOut();

        timer(3);
        cout << "\n\tThe Borg are massing...!" << endl;
        space[6][12] = borg;
        space[5][13] = borg;
        space[6][14] = borg;
        space[7][13] = borg;
        printSpace();

        timer(2);
        space[7][13] = borg;
        space[6][14] = borg;
        space[7][15] = borg;
        space[8][14] = borg;
        printSpace();

        timer(2);
        cout << "\n\tThey are advancing...!" << endl;
        space[8][14] = borg;
        space[7][15] = borg;
        space[8][16] = borg;
        space[9][15] = borg;
        printSpace();

        cout << "\n\tTime is running out!!! Enter a number to get out of there!!" << endl;

		int numIn;
		cin >> numIn;
		if (numIn != 1)
		{
		    cout << "\n\tOh no...!" << endl;
		    timer(3);
		    space[9][15] = borg;
            space[8][16] = borg;
            space[9][17] = borg;
            space[10][16] = borg;
            printSpace();

			cout << "\n\tTime ran out and you chose the wrong number to transport away from the Borg." << endl;
			cout << "\n\tThe correct number is the number of beings you would like to transport." << endl;
			cout << "\n\tKeep in mind, you probably do not want any Borg to transport with you..." << endl;
			p.playAgain();
			delete sSpace;
		}

		/*if (time > 1)
		{
			clock_t start2 = clock();
			fibRecTime(42);
			clock_t end12 = clock();
			clock_t timeTaken2 = end12 - start2;
			double time2 = timeTaken2 / (double) CLOCKS_PER_SEC;
		}*/


        /*if (time > 1)
        {*/
            space[9][15] = borg;
            space[8][16] = borg;
            space[9][17] = borg;
            space[10][16] = borg;

            printSpace();
            cout << "\n\tThat was close! You were almost assimilated!\n" << endl;
            cout << "\n\tYou managed to obtain a piece of Borg technology during your encounter..." << endl;
            enterpriseOut();
        //}

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

