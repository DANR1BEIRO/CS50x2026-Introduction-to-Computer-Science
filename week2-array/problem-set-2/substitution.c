#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int handler_error(string error_message);
int validate_key(int argc, string argv[]);
int print_ciphertext(string plaintext, string argv[]);

int main(int argc, string argv[])
{
    validate_key(argc, argv);

    string plaintext = get_string("Plaintext:  ");

    print_ciphertext(plaintext, argv);
}

int handler_error(string error_message)
{
    printf("%s\n", error_message);
    exit(1);
}

int validate_key(int argc, string argv[])
{
    if (argc != 2)
    {
        handler_error("Usage: ./substitution [key]");
    }

    if (strlen(argv[1]) != 26)
    {
        handler_error("Key must be a 26 character string");
    }

    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {

        char current_character = argv[1][i];

        if (!isalpha(current_character))
        {
            handler_error("Usage: ./substitution [string of characters]");
        }

        for (int j = i + 1; j < strlen(argv[1]); j++)
        {
            char next_character = toupper(argv[1][j]);
            if (next_character == toupper(current_character))
            {
                handler_error("Key can't contain repeated characters");
            }
        }
    }
}

int print_ciphertext(string plaintext, string argv[])
{
    printf("ciphertext: ");

    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        char current_char = plaintext[i];
        if (isalpha(current_char))
        {
            char base_idx;
            char cipher_char;
            if (isupper(current_char))
            {
                base_idx = 'A';
                cipher_char = argv[1][current_char - base_idx];
                printf("%c", toupper(cipher_char));
            }
            else
            {
                base_idx = 'a';
                cipher_char = argv[1][current_char - base_idx];
                printf("%c", tolower(cipher_char));
            }
        }
        else
        {
            printf("%c", current_char);
        }
    }
    printf("\n");
    exit(0);
}

// key YTNSHKVEFXRBAUQZCLWDMIPGJO
// plaintext:  Hello!
// ciphertext: Ehbbq!

// TODO

// ok get the key by command-line argument
// ok validate key
// ok check the key length
// ok check for ǹon-alphabetic characters
// ok check for repeated characters (case-insensitive )
// ok get plaintext with get_string
// ok encipher
// ok for each alphabetic character, determine what letter in maps to
// ok preserve case
// ok leave non-alphabetic characters as-is
// ok print ciphertext