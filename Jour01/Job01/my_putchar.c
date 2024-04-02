//
// Created by corentin on 27/11/23.
//

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

