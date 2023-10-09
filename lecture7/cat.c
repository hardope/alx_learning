#include <stdio.h>

/**
 * main - Entry point
 * Description: Print the contents of a file
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
    FILE *fp;
    char ch;

    if (argc != 2)
    {
        printf("Usage: %s <filename>\n", argv[0]);
        return (1);
    }

    fp = fopen(argv[1], "r");
    if (fp == NULL)
    {
        printf("Cannot open file\n");
        return (1);
    }

    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);

    printf("\n");

    fclose(fp);
    return (0);
}