#include <stdio.h>
#include <cs50.h>

float average(int arr[]);

int main(main)
{
    int n = 3;
    int scores[n];

    for (int i = 0; i < n; i++)
    {
        scores[i] = get_int("Score %i: ", i);
    }

    printf("Average: %.2f\n", average(scores));
}

float average(int arr[])
{
    return (arr[0] + arr[1] + arr[2]) / 3.0;
}