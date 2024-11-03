#include <stdio.h>
#include "cs50.h"
void caugh();

int main(void)
{
    int count = get_int("Сколько раз сказать?\n");
    caugh("привет", count);
}

void caugh(string word, int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("%s\n", word);
    }
}