//
// Created by corentin on 29/11/23.
//

#include <unistd.h>
#include <stdlib.h>

int length(const char *str)
{
    int i = 0;
    while(str[i] != 0)
    {
        i++;
    }
    return i;
}

int num_length(int num)
{
    int i = 0;
    while(num != 0)
    {
        num = num/10;
        i++;
    }

    return i;
}

int *number_array(int num)
{
    int i =0;
    int len = num_length(num);
    int *numberArray = malloc(sizeof(int) *len);

    while (i<len)
    {
        numberArray[i] = num % 10;
        num /= 10;
        i++;
    }
    numberArray[i] = '\0';
    return numberArray;
}

char *reverse_string(char *str)
{
    int i = 0;
    int len = length(str);
    char *temp = malloc(sizeof(char));

    while(i < len/2)
    {
        *temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = *temp;
        i++;
    }
    free(temp);

    return str;

}

char *my_itoa(int num)
{
    int i = 0;
    int len = num_length(num);
    int *arrayNum = number_array(num);
    char *str = malloc(sizeof(char) *len+1);

    while(i != len)
    {
        str[i] = arrayNum[i] + '0';
        i++;
    }
    str[i] = '\0';

    char *reversed = reverse_string(str);

    return reversed;
}
int my_atoi(char *str)
{
    int i = 0;
    int ascii = 0;

    while(str[i] != '\0')
    {
        ascii = ascii * 10 + (str[i] - '0');
        ++i;
    }
    return ascii;
}

int fibonnaci(int num)
{

    int n1=0,n2=1,n3;
    int i = 2;

    while(i < num)
    {

        n3 = n1 + n2;

        n1 = n2;

        n2 = n3;



        ++i;
    }
return n3;
}

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char *str)
{
    int i = 0;

    while(str[i] != 0)
    {
        my_putchar(str[i]);
        i++;
    }
}



int main(int argc, char **argv)
{
    if(argc < 2)
    {
        return 0;
    }
    int fib_num = my_atoi(argv[1]);

    char *str_fib = my_itoa(fibonnaci(fib_num));

    my_putstr(str_fib);

    return 0;
}