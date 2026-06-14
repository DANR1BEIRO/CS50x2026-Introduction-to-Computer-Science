#include <stdio.h>

// prototype: says to the compiler that exist a function in some place bellow main
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