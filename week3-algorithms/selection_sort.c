#include <stdio.h>
#include <stdlib.h>

void selectionSort(int arr[], int arrayLength);
int main(void)
{
    int numbers[] = {7, 2, 5, 4, 1, 6, 0, 3};
    int length = sizeof(numbers) / sizeof(numbers[0]);

    selectionSort(numbers, length);

    for (int i = 0; i < length; i++)
    {
        printf("%i ", numbers[i]);
    }
    return EXIT_SUCCESS;
}

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int smallest = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[smallest])
            {
                smallest = j;
            }
        }

        if (smallest != i)
        {
            int temp = arr[i];
            arr[i] = arr[smallest];
            arr[smallest] = temp;
        }
    }
}