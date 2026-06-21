#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h> // for toupper

int main(int argc, string argv[])
{
    if (argc < 2)
    {
        printf("Usage: ./initials [word1] [word2]...[wordN]\n");
        return 1;
    }

    for (int i = 1; i < argc; i++)
    {
        if (argv[1][0] != '\0')
        {
            printf("%c", toupper(argv[i][0]));
        }
    }
    printf("\n");
    return 0;
}