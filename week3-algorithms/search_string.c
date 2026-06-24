#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("How to use this program: ./search_string [some name]\n");
        return 1;
    }

    string names[] = {"goku", "gohan", "goten"};
    size_t length = sizeof(names) / sizeof(names[0]);

    for (int i = 0; i < length; i++)
    {
        if (strcmp(names[i], argv[1]) == 0)
        {
            printf("%s found at idx %i\n", argv[1], i);
            return EXIT_SUCCESS;
        }
    }
    printf("%s not found\n", argv[1]);
    return EXIT_FAILURE;
}