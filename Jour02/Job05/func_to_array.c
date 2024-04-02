//
// Created by corentin on 18/12/23.
//

#include <stdlib.h>
#include <unistd.h>


void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char *str)
{
    int i = 0;

    while(str[i] != 0)
    {
        my_putchar(str[i]);
        i++;
    }
    my_putchar(' ');
}

void func_to_array(char **strs, void(*func)(char*))
{

    int i = 0;

    while(strs[i] != 0)
    {
        func(strs[i]);
        i++;
    }

}