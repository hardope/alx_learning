#include <stdio.h>

/**
 * main - Entry point
 * Desc - Write into a file
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
    FILE *myfile;
    char ch;

    if (argc < 3)
    {
        printf("Usage: %s <filename> <text>\n", argv[0]);
        return (1);
    }

    myfile = fopen(argv[1], "w");
    if (myfile == NULL)
    {
        printf("Cannot open file\n");
        return (1);
    }


    for (int i = 2; i < argc; i++)
    {
        fprintf(myfile, "%s ", argv[i]);
    }

    fclose(myfile);
    return (0);
}