//
// Created by corentin on 29/11/23.
//


int sqrt(int n)
{

    int temp, sqrt;

    sqrt = n / 2;
    temp = 0;

    while(sqrt != temp){
        temp = sqrt;
        sqrt = ( n/temp + temp) / 2;
    }
    return sqrt;
}
