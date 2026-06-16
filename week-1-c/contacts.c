#include <cs50.h>
#include <stdio.h>

void main(void)
{
    string name = get_string("Name: ");
    int age = get_int("Age: ");
    string phoneNumber = get_string("Phone number: ");
    string location = get_string("Location: ");

    printf("New contact: %s, %i, lives in %s and can be reached at %s.\n", name, age, location, phoneNumber);
}