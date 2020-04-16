#include "StartGame.hpp"
#include <iostream>
#include "StartSpace.hpp"
#include "EnterpriseSpace.hpp"
#include "Character.hpp"
#include "Frodo.hpp"
#include "Space.hpp"
#include <limits>
#include <cstdlib>
#include <stdio.h>
using std::numeric_limits;
using std::streamsize;
using std::cin;
using std::cout;
using std::endl;

void StartGame()
{
    for (int i = 0; i < 5; i++)
        cout << '\n';

    cout << "********************************************************************************************************\n";
    cout << "********************************************************************************************************\n";
    cout << "**********************************                              ****************************************\n";
    cout << "**********************************      A Paradox of Chaos      ****************************************\n";
    cout << "**********************************                              ****************************************\n";
    cout << "********************************************************************************************************\n";
    cout << "********************************************************************************************************\n";




    cout << "\n\tYou begin to wake, you feel cold, you feel pain." << endl;
    cout << "\tYou are overwhelmed by smoke and burning stench," << endl;
    cout << "\tbarely able to stand you get up and hobble around" << endl;
    cout << "\ttrying to make sense of what is happening. All you remember" << endl;
    cout << "\tis a very loud sound and then...screaming...and...nothing..." << endl;
    cout << "\tuntil now." << endl;

    cout << "\n\tAs your hearing comes back and the ringing in your ears lessens," << endl;
    cout << "\tyou hear yelling and grunts. You run toward it. You see a body laying" << endl;
    cout << "\ton the ground, dressed very strangely...wearing some kind of black shell." << endl;
    cout << "\tAs you approach, something flips up and you see a face, bloody and grimaced" << endl;
    cout << "\tin pain. He's yelling something...you discern some of it and cannot comprehend" << endl;
    cout << "\tthe horror this man is describing..." << endl;

    cout << "\n\tIn his time and dimension, there was an experiment to produce free limitless energy which" << endl;
    cout << "\tcould only be tested in space. The sheer magnitude of power it produced would" << endl;
    cout << "\thave destroyed his planet. It was something called a particle accelerator." << endl;

    cout << "\n\tSomething went wrong. There was an overload and the accelerator ripped a hole" << endl;
    cout << "\tin the fabric of space forcing multiple dimensions to converge, causing chaos." << endl;
    cout << "\tNothing makes sense anymore and worlds have been mixed..." << endl;

    cout << "\n\tIt's up to you now! You are the only one that can save the universe." << endl;
    cout << "\tFind the gyro for the particle accelerator and repair the accelerator...its the only way" << endl;
    cout << "\tto make the universe right again and reverse this nightmare." << endl;

    cout << "\n\tThe dying man said with his last breath: Who are you...where are we?" << endl;
    cout << "\n\tI'm Frodo...this is The Shire.\n" << endl;

    cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
    cout << "\nTip: Works best in full screen.\n" << endl;

   //if (system("Pause")) system("read");
   /* char ch;
    while(1)
    {
        cout << "\nPress 'Enter' to continue";
        ch = getchar();
        if (ch == 0x0A)
            break;
        else
            cout << "\nPress 'Enter'";
    }*/    

    Frodo *frodo = new Frodo;
    Space *sSpace = new StartSpace(frodo);

    sSpace->printSpace();
    sSpace->spaceOutput();










    delete sSpace;
    delete frodo;




}
