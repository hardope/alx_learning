#include<stdio.h>

/**
 * main - Entry point
 * Desc: Loops in C
 * Return: Always 0 (Success)
*/

int main (void)
{
    int i = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Hello\n");
    }

    int j = 0;
    while (j < 10)
    {
        printf("Loops\n");
        j++;
    }

    int k = 0;
    do
    {
        printf("Do while Loops\n");
        k++;
    } while (k < 10);

    int list[5] = {1, 18, 9292, 12, 5};

    for (int l = 0; l < 5; l++)
    {
        printf("%d\n", list[i]);
    }
}