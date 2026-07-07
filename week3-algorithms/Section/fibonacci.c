#include <stdio.h>
#include <cs50.h>

int fib(int term);
int main(void)
{
    int term = get_int("Term: ");
    int number_at_term = fib(term);
    printf("%i\n", number_at_term);
}

int fib(int n)
{
    if (n <= 0)
        return 0;
    if (n == 1)
        return 1;

    int sequence[n + 1];
    sequence[0] = 0;
    sequence[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        sequence[i] = sequence[i - 1] + sequence[i - 2];
    }
    return sequence[n];
}