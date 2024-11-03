#include <stdio.h>
#include "cs50.h"

int main(void)
{
    string s = get_string("Введите слово\n");
    for (int i = 1; i < strlen(s); i++)
    {
        printf("%c\n", s[i]);
    }
}