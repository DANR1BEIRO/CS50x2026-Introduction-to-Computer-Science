#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string text = get_string("Enter a word: ");

    for (int i = strlen(text) + 1; i >= 0; i--)
    {
        printf("%c", text[i]);
    }
    printf("\n");
}