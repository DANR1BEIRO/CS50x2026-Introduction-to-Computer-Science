#include <stdio.h>
#include <cs50.h>

int fib(int term);
int main(void)
{
    int term = get_int("Print the sequence up to term: ");

    for (int i = 0; i < term; i++)
    {
        printf("%i, ", fib(i));
    }
    printf("%i.\n", fib(term));
    return 0;
}

int fib(int n)
{
    if (n <= 0)
        return 0;
    if (n == 1)
        return 1;

    return fib(n - 1) + fib(n - 2);
}