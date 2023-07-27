//
#include "die.h"
#include <random>
#include <iostream>
#include <cstdlib>
#include <ctime>

void Die::roll()
{
    srand(time(0));
    roll_value = rand() % 6 +1;
    
}

int const Die::rolled_value()
{
    roll();
    return roll_value;
}

