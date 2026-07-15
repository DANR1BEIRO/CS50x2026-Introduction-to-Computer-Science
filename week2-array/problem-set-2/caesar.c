#include <stdio.h>
#include <cs50.h>
#include <stdlib.h> // allow to use atoi() (ASCII to Integer) and exit()
#include <ctype.h>  // allow to use isdigit()
#include <string.h> // allow to use strlen()

bool only_digits(string x);
int usage_error_message();

int main(int argc, char *argv[])
{
    int key = 0;
    if (argc != 2)
    {
        usage_error_message();
    }

    if (!only_digits(argv[1]))
    {
        usage_error_message();
    }
    else
    {
        key = atoi(argv[1]);
    }

    string plaintext = get_string("plaintext:  ");
    printf("ciphertext: ");

    for (int i = 0; i < strlen(plaintext); i++)
    {
        char text_character = plaintext[i];
        if (isalpha(text_character))
        {
            char base_idx;
            if (isupper(text_character))
            {
                base_idx = 'A';
            }
            else
            {
                base_idx = 'a';
            }
            char cypher_char = ((text_character - base_idx + key) % 26) + base_idx;
            printf("%c", cypher_char);
        }
        else // iff isn't a alphabetical character
        {
            printf("%c", text_character);
        }
    }
    printf("\n");
    return 0;
}

bool only_digits(string x)
{
    for (int i = 0; i < strlen(x); i++)
    {
        if (!isdigit(x[i]))
        {
            return false;
        }
    }
    return true;
}

int usage_error_message()
{
    printf("Usage: ./caesar key\n");
    exit(1);
}
