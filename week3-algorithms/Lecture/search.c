#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

#define NUMBER_NOT_FOUND 1

int main(void)
{
    int arr[] = {20, 500, 10, 5, 100, 1, 50};
    int number = 5;
    size_t arr_length = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < arr_length; i++)
    {
        if (arr[i] == number)
        {
            printf("%i found at idx %i\n", number, i);
            return EXIT_SUCCESS;
        }
    }
    printf("%i not found.\n", number);
    return NUMBER_NOT_FOUND;
}