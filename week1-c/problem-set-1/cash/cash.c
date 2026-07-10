#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

int change(int x);
int main(void)
{
    int change_owed;
    do
    {
        change_owed = get_int("Change: ");
    } while (change_owed <= 0);

    printf("%i\n", change(change_owed));
}

int change(int x)
{
    int quarter = 25;
    int dime = 10;
    int nickel = 5;
    int penny = 1;
    int coins = 0;

    while (x >= quarter)
    {
        x -= quarter;
        coins++;
    }

    while (x >= dime)
    {
        x -= dime;
        coins++;
    }
    while (x >= nickel)
    {
        x -= nickel;
        coins++;
    }
    while (x >= penny)
    {
        x -= penny;
        coins++;
    }

    return coins;
}
