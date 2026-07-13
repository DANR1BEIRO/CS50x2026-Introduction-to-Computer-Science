#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int scrabble(string x);
void checkTheGreater(int player1, int player2);

typedef struct
{
    char letter;
    int value;
} letterValue;

letterValue dictionary[26] = {
    {'A', 1},
    {'B', 3},
    {'C', 3},
    {'D', 2},
    {'E', 1},
    {'F', 4},
    {'G', 2},
    {'H', 4},
    {'I', 1},
    {'J', 8},
    {'K', 5},
    {'L', 1},
    {'M', 3},
    {'N', 1},
    {'O', 1},
    {'P', 3},
    {'Q', 10},
    {'R', 1},
    {'S', 1},
    {'T', 1},
    {'U', 1},
    {'V', 4},
    {'W', 4},
    {'X', 8},
    {'Y', 4},
    {'Z', 10},
};

int main(void)
{
    int player1 = scrabble(get_string("Player 1: "));
    int player2 = scrabble(get_string("Player 2: "));

    checkTheGreater(player1, player2);
    return EXIT_SUCCESS;
}

int scrabble(string player)
{
    int sum = 0;

    for (int i = 0, n = strlen(player); i < n; i++)
    {
        char current = toupper(player[i]);

        for (int j = 0; j < 26; j++)
        {
            if (dictionary[j].letter == current)
            {
                sum += dictionary[j].value;
            }
        }
    }
    return sum;
}

void checkTheGreater(int player1, int player2)
{
    if (player1 == player2)
    {
        printf("Tie!\n");
        return;
    }
    if (player1 > player2)
    {
        printf("Player 1 wins!\n");
        return;
    }
    else
    {
        printf("Player 2 wins!\n");
    }
}
