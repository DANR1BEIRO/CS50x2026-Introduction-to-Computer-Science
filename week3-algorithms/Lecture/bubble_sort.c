#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int arr[], int n);

int main(void)
{
    int data[] = {3, 2, 1};
    size_t elements = sizeof(data) / sizeof(data[0]);

    printf("Original array: ");
    for (int i = 0; i < elements; i++)
    {
        printf("%i ", data[i]);
    }
    printf("\n");

    bubbleSort(data, elements);

    printf("Bubble sorted: ");
    for (int i = 0; i < elements; i++)
    {
        printf("%i ", data[i]);
    }

    printf("\n");
}

void bubbleSort(int arr[], int n)
//   n = 3
{                                   // idx  0  1  2
    for (int i = 0; i < n - 1; i++) // {3, 2, 1};
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
