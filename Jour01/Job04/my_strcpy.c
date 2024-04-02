//
// Created by corentin on 27/11/23.
//


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