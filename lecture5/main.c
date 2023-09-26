#include "main.h"
/**
 * main - Entry point
 * Desc: Learn Scanf, Header Files and packages
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
    int number, number2;
    char operator;

    if (argc !=  4){
        printf("Usage: ./calc 7 9\n");
        return (0);
    }

    number = atoi(argv[1]);
    number2 = atoi(argv[3]);
    operator = argv[2][0];


    if (operator == '+')
        printf("%d %c %d = %d\n",number, operator, number2, add(number, number2));
    else if (operator == '-')
        printf("%d %c %d = %d\n",number, operator, number2, subtract(number, number2));
    else if (operator == '*')
        printf("%d %c %d = %d\n\n",number, operator, number2, multiply(number, number2));
    else if (operator == '/')
        printf("%d %c %d = %f\n",number, operator, number2, divide(number, number2));
    else
        printf("Usage: ./calc 7 9\n");
}