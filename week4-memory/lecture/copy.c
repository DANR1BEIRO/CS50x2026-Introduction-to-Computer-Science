#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int is_valid_string(char *string);

int main(void)
{
    char *s = "goku";
    if (!is_valid_string(s))
    {
        fprintf(stderr, "Error: invalid string\n");
        return EXIT_FAILURE;
    }

    char *t = malloc(strlen(s) + 1);
    if (t == NULL)
    {
        fprintf(stderr, "Error: memory allocation failed\n");
        return EXIT_FAILURE;
    }

    // destination, source
    strcpy(t, s);

    t[0] = toupper(t[0]);
    printf("s: %s\nt: %s\n", s, t);

    free(t);
    return EXIT_SUCCESS;
}

int is_valid_string(char *string)
{
    if (string == NULL || strlen(string) == 0 || !isalpha(string[0]))
    {
        return 0;
    }
    return 1;
}