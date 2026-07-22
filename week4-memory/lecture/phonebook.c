#include <stdio.h>
#include <cs50.h>

int main(void)
{
    FILE *file = fopen("phonebook.md", "a");
    if (file == NULL)
    {
        return 1;
    }
    char *name = get_string("name: ");
    if (name == NULL)
    {
        fclose(file);
    }

    fprintf(file, "%s\n", name);
    fclose(file);

    return 0;
}