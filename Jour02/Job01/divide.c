//
// Created by corentin on 28/11/23.
//

#include <stdio.h>

void divide(int *val)
{
    *val = *val/2;
}

int main(int argc, char **argv)
{
    int val = 30;
    int *pointer = &val;
    divide(pointer);
    printf("%d", *pointer);

    return 0;
}