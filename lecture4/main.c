#include "main.h"
/**
 * main - Entry point
 * Desc: Learn Scanf, Header Files and packages
 * Return: Always 0 (Success)
 */

int main(void)
{
    int number, number2;

    number = input("Enter first number: ");
    number2 = input("Enter second number: ");

    printf("The sum of both numbers is: %d\n", add(number, number2));
    printf("The difference of both numbers is: %d\n", subtract(number, number2));
    printf("The product of both numbers is: %d\n", multiply(number, number2));
    printf("The quotient of both numbers is: %f\n", divide(number, number2));
}