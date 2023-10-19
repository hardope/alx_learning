#include <stdio.h>

/**
 * main - Entry point
 * Desc - Learn about pointers in c language
 * Return: 0 on success
*/

int main(void)
{
    int mynumber;
    int *ptr;
    int **ptr2;

    mynumber = 10;

    printf("The address of mynumber is %p\n", &mynumber);

    ptr = &mynumber;

    printf("The value of ptr is %p\n", ptr);

    printf("The value of mynumber is %d\n", *ptr);

    ptr2 = &ptr;

    printf("The value of ptr2 is %p\n", ptr2);

    printf("The value of mynumber is %d\n", **ptr2);

    return (0);
}