//
// Created by corentin on 27/11/23.
//

#include <stdio.h>

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

int main(int argc, char **argv)
{
    printf("%d\n",my_strcmp("hello","world"));
    printf("%d\n",my_strcmp("hello","how"));
    printf("%d\n",my_strcmp("hello","bean"));
    printf("%d\n",my_strcmp("hello","are"));

}