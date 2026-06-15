#include <stdio.h>

// prototype: says to the compiler that exist a function in some place bellow main
void meow(int times);
int get_number(void);

int main(void)
{
    int n = get_number();
    meow(n);
}

int get_number(void)
{
    int number;

    do
    {
        printf("Enter the number: ");
        scanf("%d", &number);

    } while (number < 0);
    return number;
}

void meow(int times)
{
    for (int i = 0; i < times; i++)
    {
        printf("%i - meow\n", i);
    }
}
