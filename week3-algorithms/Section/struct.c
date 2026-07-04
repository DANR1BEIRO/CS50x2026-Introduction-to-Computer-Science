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
    candidate president = get_candidate();

    printf("%s has %i votes.\n", president.name, president.votes);
}

candidate get_candidate(void)
{
    candidate new_candidate;
    new_candidate.name = get_string("Name: ");
    new_candidate.votes = get_int("Votes: ");

    return new_candidate;
}