#include <stdio.h>

int main(void)
{
    char c1 = 'H';
    char c2 = 'I';
    char c3 = '!';

    /*
    in c, a char is actually just a very small integer
    (typically 1 byte/8 bits of memory)
    */

    printf("%i %i %i\n", c1, c2, c3);
}