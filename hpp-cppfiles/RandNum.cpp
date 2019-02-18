#include "RandNum.hpp"
#include <cstdlib>
#include <ctime>

int RandNum::randomNum()
{
    srand(time(0));

    for (int x = 1; x < 2; x++)
        randInt = 1 + (rand() % 12);

    return randInt;
}
