//
// Created by corentin on 28/11/23.
//

#include <stdlib.h>
#include <stdio.h>

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

char **array_clone(char **strs, int n)
{
    int i = 0;
    char **grid = malloc(sizeof(char*) *(n+1));

    while(i != n)
    {
        grid[i] = my_strdup(strs[i]);
        i++;
    }
    grid[i] = 0;
    return grid;
}

int main(int argc, char **argv)
{
    int n = 4;
    char **grid = malloc(sizeof(char*) *5);

    int i = 0;
    while(i <9)
    {
        grid[i] = malloc(sizeof(char) *10);
        i++;
    }

    grid[0] = "hello";
    grid[1] = "every";
    grid[2] = "nyan";
    grid[3] = "omg";
    grid[4] = 0;

    char **cloned = array_clone(grid, n);

    int j = 0;
    while(cloned[j] != 0)
    {
        printf("%s\n", cloned[j]);
        j++;
    }

return 0;

}