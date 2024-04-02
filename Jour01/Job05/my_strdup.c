//
// Created by corentin on 27/11/23.
//

#include <stdlib.h>
int length(char *str)
{
    int i = 0;
    while(str[i] != 0)
    {
        i++;
    }
    return i;
}

char *my_strcopy(char *dest, const char *src)
{
    if(dest == NULL) return NULL;

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

char *my_strdup(char *src)
{
    int len = length(src);
    char *dup;

    dup = malloc(sizeof *dup * len+1);

    my_strcopy(dup, src);

    return dup;
}
