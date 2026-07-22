#include <stdio.h>

void swap(int *a, int *b);

int main(void)
{
    int x = 50;
    int y = 0;

    printf("x equals %i, y equals %i\n", x, y);
    swap(&x, &y);
    printf("x equals %i, y equals %i\n", x, y);
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}