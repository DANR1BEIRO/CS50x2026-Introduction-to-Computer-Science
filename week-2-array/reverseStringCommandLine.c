#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc = 0)
    {
        return 1;
    }

    int n = strlen(argv[1]);
    for (int i = n; i >= 0; i--)
    {
        printf("%c", argv[1][i]);
    }
    printf("/n");
}