//
// Created by corentin on 30/11/23.
//

#include "manhattan.h"
int manhattan(point a, point b)
{
    int a_diff = (a.firstPoint-a.secondPoint);
    int b_diff = (b.firstPoint-b.secondPoint);

    if(a_diff < 0)
        a_diff = -a_diff;
    if(b_diff < 0)
        b_diff = -b_diff;

    int travelDistance = a_diff + b_diff;

    return travelDistance;
}