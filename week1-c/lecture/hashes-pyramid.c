#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

void printPyramid(int height);
void printMirroredPyramid(int height);
void increasedPyramid(int height);
void decreasedPyramid(int height);

void main(void)
{
    int height = get_int("Enter the height: ");
    printMirroredPyramid(height);
}

void printPyramid(int height)
{
    if (height == 0)
        return;

    if (height > 0)
    {
        for (int i = 1; i <= height; i++)
        {
            for (int j = 0; j < i; j++)
            {
                printf("#");
            }
            printf("\n");
        }
    }
    else
    {
        for (int i = 0; i > height; i--)
        {
            for (int j = height; j < i; j++)
            {
                printf("#");
            }
            printf("\n");
        }
    }
}

void printMirroredPyramid(int height)
{
    if (height > 0)
    {
        increasedPyramid(height);
        decreasedPyramid(height * -1);
    }
    else
    {
        decreasedPyramid(height);
        increasedPyramid(height * -1);
    }
}

void increasedPyramid(int height)
{
    if (height == 0)
        return;
    for (int i = 1; i <= height; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}

void decreasedPyramid(int height)
{
    if (height == 0)
        return;
    for (int i = 0; i > height; i--)
    {
        for (int j = height; j < i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
