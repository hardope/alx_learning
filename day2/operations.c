#include<stdio.h>

/**
 * main - Entry point
 * Desc: sum of two numbers
 * Return: Always 0 (Success)
*/

int main (void)
{
    int number1 = 200;
    int number2 = 1782;

    int sum = number1 + number2;
    int diff = number1 - number2;

    printf("The sum of %d and %d is %d\n", number1, number2, sum);
    printf("The difference of %d and %d is %d\n", number1, number2, diff);

    return (0);

}