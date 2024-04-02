//
// Created by corentin on 27/11/23.
//

#include <stdlib.h>

int my_strlen(const char *str)
{
    int i = 0;

    while(str[i] != 0)
    {
        i++;
    }
    return i;
}

int blank(char src)
{
    if(src == '\n')
    {
        return 0;
    }else if(src == '\t')
    {
        return 0;
    }else if(src == '\v')
    {
        return 0;
    }else if(src == '\f')
    {
        return 0;
    }else if(src == '\r')
    {
        return 0;
    }else if(src == ' ')
    {
        return 0;
    }
    return 1;
}

char *my_strcopy(char *dest, const char *src)
{

    char *return_ptr = dest;

    while(*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0';

    return return_ptr;
}

char *trim(char *src)
{
    int j = 0;


    while(!blank(*src))
    {
        src++;
    }

    int len = my_strlen(src);


    while(!blank(src[len-j-1]))
    {
        j++;
    }
    src[len-j] = 0;

    char *dup = malloc(sizeof *src *1);

    my_strcopy(dup, src);

    return dup;
}