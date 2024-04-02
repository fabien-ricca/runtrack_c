//
// Created by corentin on 28/11/23.
//

#include <stdlib.h>
#include <stdio.h>

int blank(char src)
{
    if(src == '\n' || src == '\t' || src == '\v' || src == '\f' || src == '\r' || src == ' ' || src == '\0')
    {
        return 1;
    }
    return 0;
}


int word_counter(char *str)
{
    int i = 0;
    int count = 0;

    while(str[i] != 0)
    {
        if(str[i] != 0 && !blank(str[i]))
        {
            if(str[i] && !blank(str[i]) && blank(str[i+1]))
            {
                count++;
            }
        }
        char src = str[i];
        char src1 = str[i+1];
        i++;
    }
    return count;
}

char **split(char *src)
{
    int count_word = word_counter(src);

    char **copy = malloc(sizeof(char*) * count_word +1);
    int i = 0;
    while(*src)
    {
        int j = 0;
        while(*src && blank(*src))
        {
            src++;
        }
        while(*src && !blank(*src)) {
            src++;
            j++;
        }
        copy[i] = malloc(sizeof(char) * j + 1);
        int tmp = j;
        while (j >= 0) {
            copy[i][j] = *src--;
            j--;
        }
        copy[i][tmp] = 0;
        i++;
        src += tmp+1;
    }
    copy[i] = 0;
    return copy;
}