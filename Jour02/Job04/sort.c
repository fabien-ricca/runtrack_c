//
// Created by corentin on 28/11/23.
//

#include <stdio.h>
#include <stdlib.h>


void swap(char *a, char *b)
{

    char temp = *a;
    *a = *b;
    *b = temp;
}

int my_strcmp(const char *s1, const char *s2)
{
    int i = 0;
    int num =  0;

    while(s1[i] != 0)
    {
        if(s2[i] != 0) {
            if(s1[i] != s2[i])
            {
                num = (int)s1[i] - (int)s2[i];
                if(num < 0)
                {
                    return num;
                }else if (num > 0)
                {
                    return num;
                }
            }
            i++;
        }else
        {
            num = 1;
            break;
        }
    }
    if(s2[i] != 0)
    {
        num = -1;
    }
    return num;
}


char **sort(char **strs)
{
    int i = 0;
    int j = 0;

    while(strs[i+1] != 0)
    {
        while(strs[j+1] != 0)
        {
            if(my_strcmp(strs[j], strs[j+1]) > 0)
            {
                char *temp = strs[j];
                strs[j] = strs[j+1];
                strs[j+1] = temp;
            }
            j++;
        }
        j=0;
        i++;
    }
    return strs;
}

int main(int argc, char **argv)
{
    char **grid = malloc(sizeof(char*) *7);

    int i = 0;
    while(i <9)
    {
        grid[i] = malloc(sizeof(char) *10);
        i++;
    }

    grid[0] = "hello";
    grid[1] = "nyan";
    grid[2] = "every";
    grid[3] = "how";
    grid[4] = "are";
    grid[5] = "better";
    grid[6] = 0;


    char **sorted = sort(grid);


    int j =0;

    while(sorted[j] != 0)
    {
        printf("%s\n", sorted[j]);
        j++;
    }

return 0;
}
