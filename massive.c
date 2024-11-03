#include <stdio.h>
#include "cs50.h"

int main(void)
{
    int count;
    do
    {
        count = get_int("Введите количество людей: ");
    }
    while (count < 1);
    int ages[count];
    for (int i = 0; i < count; i++)
    {
        do
        {
        ages[i] = get_int("Введите возраст %i человека: ", i+1);
        }
        while (ages[count] < 1);
    }
    for (int i = 0; i < count; i++)
    {
        printf("Возраст %i человека через год: %i\n", i+1, ages[i] + 1);
    }
}
