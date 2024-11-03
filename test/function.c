#include <stdio.h>
#include "cs50.h"

int GetPositiveInt();
int i;
int main(void)
{
    int i = GetPositiveInt();
    printf("Ваше позитивное число: %i\n", i);
}

int GetPositiveInt(void)
{
    int i;
    do 
    {
        i = get_int("Number: ");
    }
    while (i < 1);
    return i;
}