#include <cs50.h>
#include <stdio.h>
#include <string.h>

void getStringLength(string word);

int main(void)
{
    string name = get_string("Name: ");
    getStringLength(name);
    printf("Length using the builtin strlen(): %i\n", (int)strlen(name));
}

void getStringLength(string word)
{
    int n = 0;
    while (word[n] != '\0')
    {
        n++;
    }

    printf("Length using my own function: %i\n", n);
}