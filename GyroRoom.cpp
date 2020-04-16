#include "GyroRoom.hpp"
#include <iostream>
#include <limits>
#include <time.h>
#include <stdio.h>
using std::numeric_limits;
using std::streamsize;
using std::cin;
using std::cout;
using std::endl;

PlayAgain play;

GyroRoom::GyroRoom(Frodo *Fptr) : Space(Fptr)
{
    gyro = new Gyro;
	wind = new WindOfEchos;
	
    space[2][32] = gyro;
	
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
}

void GyroRoom::spaceOutput()
{
    space[10][1] = frodo;
    printSpace();
    cout << "\n\tLook!!! There's the gyro! Go grab it!\n" << endl;


    space[10][1] = NULL;
    space[5][10] = frodo;
    printSpace();
	
	space[5][10] = NULL;
	space[11][14] = frodo;
	space[11][15] = wind;
	space[11][16] = wind;
	printSpace();
	
	cout << "\n\tOh no! You've been sucked into The Wind of Echoes!" << endl;
	cout << "\n\tYou must enter a number...the magic number of the winds!" << endl;
	int magicNum;
	cin >> magicNum;
	if (magicNum != 17)
	{
		cout << "\n\tYou did not choose the correct number! You have been consumed by the winds." << endl;
		cout << "\n\tNext time, count the winds before they attack to find the right number." << endl;
		play.playAgain();
		delete sSpace;
	}
	
	else
	{
		cout << "\n\tYou counted the winds correctly! Well done!" << endl;
		char ch;
		while(1)
		{
			ch = getchar();
			if (ch == 0x0A)
				break;
		}
	}


    space[11][14] = NULL;
    space[3][20] = frodo;
    printSpace();
	

    space[3][20] = NULL;
    space[2][31] = frodo;
    printSpace();


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
