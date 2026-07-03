#include <stdio.h>
#include <cs50.h>

float average(int length, int arr[]);

int main(void)
{
    const int N = 3;
    int scores[N];

    for (int i = 0; i < N; i++)
    {
        scores[i] = get_int("Score %i: ", i);
    }

    printf("Average: %.2f\n", average(N, scores));
}

float average(int length, int arr[])
{
    float sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += arr[i];
    }
    return sum / length;
}