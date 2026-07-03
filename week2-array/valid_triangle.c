#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

#define ERR_INVALID_ARG_COUNT 2
#define ERR_INVALID_DIMENSIONS 3

bool validate_triangle(int x, int y, int z);
bool validate_input(int x);
int run(int x, char *arr[]);

int main(int argc, char *argv[])
{
    return run(argc, argv);
}

bool validate_triangle(int x, int y, int z)
{
    if (x + y <= z || x + z <= y || y + z <= x)
    {
        printf("Invalid triangle\n");
        return false;
    }
    printf("valid triangle\n");
    return true;
}

bool validate_input(int x)
{
    if (x < 4)
    {
        printf("Too few arguments! You must enter the exact of 3 numbers!\nUsage: ./valid_triangle [number1] [number2] [number3]\n");
        return false;
    }

    if (x > 4)
    {

        printf("Too many arguments! You must enter the exact of 3 numbers!\nUsage: ./valid_triangle [number1] [number2] [number3]\n");
        return false;
    }

    return true;
}

int run(int x, char *arr[])
{
    if (!validate_input(x))
    {
        return ERR_INVALID_ARG_COUNT;
    }

    int side1 = atoi(arr[1]);
    int side2 = atoi(arr[2]);
    int side3 = atoi(arr[3]);

    if (side1 <= 0 || side2 <= 0 || side3 <= 0)
    {
        printf("Invalid input! Sides must be positive integers!\n");
        return ERR_INVALID_DIMENSIONS;
    }

    if (!validate_triangle(side1, side2, side3))
    {
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}
