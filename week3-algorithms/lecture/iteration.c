#include <stdio.h>
#include <stdlib.h>

void draw(int n);
int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("program usage: ./iteration [integer]\n");
        return 1;
    }

    int height = atoi(argv[1]);

    draw(height);
    return 0;
}

void draw(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}