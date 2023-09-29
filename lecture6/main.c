#include <stdio.h>

int print_chars(char i);

int main(void)
{
    print_chars('A');
    printf("\n");
    return (0);
}

int print_chars(char i)
{
    printf("%c", i);
    if (i < 'z')
    {
        print_chars(i + 1);
    }

    return (0);
}