#include <stdio.h>
#include <cs50.h>

void main(void)
{
    string name = get_string("Enter the name: ");
    printf("Hello, %s!\n", name);
}