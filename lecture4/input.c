#include "main.h"

/**
 * input - Takes input from user
 * @query: The query to ask the user
 * 
 * Return: The input from the user
 */

int input(char *query)
{
    int number;

    printf("%s", query);
    scanf("%d", &number);

    return (number);
}