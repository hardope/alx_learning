#include <stdio.h>

/**
 * main - Entry point
 * Desc - Learn OOP in c language
 * Return: Always 0 (Success)
*/

int main(void)
{
    typedef struct person
    {
        char *name;
        int age;
        char *phone;
    } person;

    person p1;

    p1.name = "John";
    p1.age = 20;
    p1.phone = "1234567890";

    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);
    printf("Phone: %s\n", p1.phone);

    p1.name = "Doe";

    printf("Name: %s\n", p1.name);

    return (0);
}