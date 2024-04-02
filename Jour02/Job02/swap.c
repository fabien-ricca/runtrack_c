//
// Created by corentin on 28/11/23.
//

#include <stdio.h>


void swap(int *a, int *b)
{

    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(int argc, char **argv)
{
    int a = 5;
    int b = 10;
    int *p1 = &a;
    int *p2 = &b;

    swap(p1, p2);

    printf("%d\n", *p1);

    printf("%d", *p2);



}