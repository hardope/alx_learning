#include <stdio.h>

/**
 * main - Entry point
 * Desc: Functions in C
 * Return: Always 0 (Success)
*/

int add(int a, int b);

int main(void)
{
    int num = 92;
    int num2 = 42;

    int sum = add(num, num2);

    printf("The sum of %d and %d is %d\n", num, num2, sum);
}

int add(int a, int b)
{
    return (a + b);
}