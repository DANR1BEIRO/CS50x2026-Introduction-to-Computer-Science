#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height = 0;
    do
    {
        height = get_int("Height: ");
    } while (height <= 0 || height > 8);

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < height - i - 1; j++)
        {
            printf(" ");
        }

        for (int hash = 0; hash < i + 1; hash++)
        {
            printf("#");
        }

        printf("  ");

        for (int x = 0; x < i + 1; x++)
        {
            printf("#");
        }
        printf("\n");
    }
}