#include "PlayAgain.hpp"
#include "StartGame.hpp"
#include <iostream>
#include <limits>
using std::numeric_limits;
using std::streamsize;
using std::cin;
using std::cout;
using std::endl;

void PlayAgain::playAgain()
{
    cout << "\n\t1.   Play Again" << endl;
    cout << "\t2.   Quit\n" << endl;
    int input;
    cin >> input;
    while (!(input == 1 || input == 2))
    {
        cout << "Invalid Choice\n" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> input;
    }

    if (input == 1)
    {
        StartGame();
    }
}


