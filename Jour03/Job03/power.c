//
// Created by corentin on 29/11/23.
//

#include <stdio.h>

int power(int num, int power)
{
    if(num == 0)
    {
        return 0;
    }
    if(num == 1)
    {
        return 1;
    }
    if(power == 1)
    {
        return num;
    }
    int result = 1;

    while(power)
    {
        result = result * num;
        power--;
    }
    return result;
}