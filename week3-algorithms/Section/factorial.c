#include <stdio.h>
#include <cs50.h>

int factorial(int n);
int main(void)
{
    int number = get_int("Factorial: ");
    printf("Factorial of %i is %i\n", number, factorial(number));
}

int factorial(int n)
{
    if (n <= 1)
        return 1;

    return n * factorial(n - 1);
}