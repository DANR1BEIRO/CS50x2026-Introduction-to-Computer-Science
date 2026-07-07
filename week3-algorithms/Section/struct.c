#include <stdio.h>
#include <cs50.h>

typedef struct
{
    string name;
    int votes;
} candidate;

candidate get_candidate(void);

int main(void)
{
    candidate candidates[3];
    int length = sizeof(candidates) / sizeof(candidates[0]);

    for (int i = 0; i < length; i++)
    {
        candidates[i] = get_candidate();
    }
    printf("\n");

    for (int i = 0; i < length; i++)
    {
        printf("%s has %i votes.\n", candidates[i].name, candidates[i].votes);
    }
}

candidate get_candidate(void)
{
    candidate new_candidate;
    new_candidate.name = get_string("Name: ");
    new_candidate.votes = get_int("Votes: ");

    return new_candidate;
}