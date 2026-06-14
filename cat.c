#include <stdio.h>

// prototype
void meow(int n);

int main(void)
{
    meow(10);
}

void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%i - meow inside a prototyped function\n", i);
    }
}