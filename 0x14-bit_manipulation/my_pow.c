#include "main.h"

int my_pow(int base, int exponent)
{
    int result = 1, i;
    for (i = 0; i < exponent; i++)
    {
        result *= base;
    }
    return result;
}