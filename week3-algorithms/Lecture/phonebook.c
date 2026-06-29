#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <stdlib.h>

#define PERSON_NOT_FOUND 2

typedef struct
{
    string name;
    string number;
} person;

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("How to use this program: ./phonebook [name]\n");
        return EXIT_FAILURE;
    }

    person people[] = {
        {"goku", "0001"},
        {"gohan", "0002"},
        {"goten", "0003"}};

    size_t length = sizeof(people) / sizeof(people[0]);

    for (int i = 0; i < length; i++)
    {
        if (strcmp(people[i].name, argv[1]) == 0)
        {
            printf("Found %s\n", people[i].number);
            return EXIT_SUCCESS;
        }
    }

    printf("%s not found.\n", argv[1]);
    return PERSON_NOT_FOUND;
}
