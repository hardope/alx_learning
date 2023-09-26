#include<stdio.h>

/**
 * main - Entry point
 * Desc: Conditional statements in C
 * Return: Always 0 (Success)
*/

int main(void)
{
    int age = 18;

    if (age < 13)
    {
        printf("You are a child\n");
    }
    else if (age >= 13 && age < 18)
    {
        printf("You are a teenager\n");
    }
    
    else if (age >= 18 && age < 21)
    {
        printf("You are a young adult\n");
    }
    else
    {
        printf("You are an adult\n");
    }

    char *name = "John";
    char *surname = "Doe";

    if (name == "John" && surname == "Doe")
    {
        printf("You are John Doe\n");
    }
    else
    {
        printf("You are not John Doe\n");
    }

    if (name == "John" || surname == "Doe")
    {
        printf("You are John or Doe\n");
    }
    else
    {
        printf("You are not John or Doe\n");
    }

    return (0);
}