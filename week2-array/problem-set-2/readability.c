#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <math.h> // to be able to use round() function

int get_index(int x, int y, int z);
void print_grade(int x);
int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    string text = get_string("Text: ");

    int letters = count_letters(text);
    int words = count_words(text);
    int sentence = count_sentences(text);

    int index = get_index(letters, words, sentence);
    print_grade(index);
}

void print_grade(int x)
{
    if (x < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (x > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", x);
    }
}

int get_index(int letters, int words, int sentence)
{

    // L is the average number of letters per 100 words in the text
    float L = (float)letters / words * 100;

    // S is the average number of sentences per 100 words in the text
    float S = (float)sentence / words * 100;

    int index = round(0.0588 * L - 0.296 * S - 15.8);
    return index;
}

int count_letters(string text)
{
    int letters = 0;

    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
        {
            letters++;
        }
    }
    return letters;
}

int count_words(string text)
{
    int words = 1;

    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (text[i] == ' ')
        {
            words++;
        }
    }
    return words;
}

int count_sentences(string text)
{
    int sentence = 0;

    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (text[i] == '?' || text[i] == '!' || text[i] == '.')
        {
            sentence++;
        }
    }
    return sentence;
}
// printf("Letters %i\n", letters);
// printf("words is %i\n", words);
// printf("sentences is %i\n", sentence);