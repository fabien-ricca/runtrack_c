//
// Created by corentin on 27/11/23.
//

#include <unistd.h>
#include <stdio.h>

int my_strlen(char *str)
{
    int i = 0;

    while(str[i] != 0)
    {
        i++;
    }
    return i;
}
