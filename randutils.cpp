#include "randutils.h"
#include <cstdlib>
#include <ctime>

void randinit()
{
    srand(time(NULL));
}

int randbetween(int min, int max)
{
    return rand() % (max - min) + min;
}
