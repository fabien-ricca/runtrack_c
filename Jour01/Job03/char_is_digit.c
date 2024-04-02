//
// Created by corentin on 27/11/23.
//

int char_is_digit(char c)
{
    if(c < 48 || c > 57)
    {
        return 0;
    }
    return 1;
}