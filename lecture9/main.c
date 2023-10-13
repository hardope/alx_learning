#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 * Desc - Learn about dynamic memory allocation
 * Return: Always 0 (Success)
*/

int main(void)
{
    int num;
    char u;

    printf("int: %lu\n", sizeof(int));
    printf("char: %lu\n", sizeof(char));
    printf("float: %lu\n", sizeof(float));
    printf("double: %lu\n", sizeof(double));
    printf("long: %lu\n", sizeof(long));

    char *str;

    str = malloc(sizeof(char) * 10);

    if (str == NULL)
    {
        printf("Failed to allocate memory\n");
        return (1);
    }

    strcpy(str, "Holberton");

    printf("%s\n", str);

    str = realloc(str, sizeof(char) * 20);

    strcpy(str, "c is so cool");

    printf("%s\n", str);

    free(str);
    return (0);
}