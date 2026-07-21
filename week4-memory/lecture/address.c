#include <cs50.h>
#include <stdio.h>

int main(void)
{
    /* & and *p
    &: The unary & operator is the address-of operator,
    which evaluates and retrieves the specific location of
    a variable or object in the computer's memory

    %p: The %p format specifier is a conversion character used
    in formatted output functions like printf to display the
    value of a pointer, which represents a memory address

    The relationship between them is that & fetches the raw
    memory address, while %p provides the specific formatting
    mechanism required to print that address to the screen.

    int *p: when we see an asterisc right after a data type (like innt),
    it just means that the variable in question is not going to be
    an int, but an 'address' of an integer
    */
    int n = 50;
    int *p = &n;

    // this give us the address *p stores (&n)
    printf("n lives at %p in the computer's memory\n", p);

    /* Dereference Operator
    this give us the VALUE at the address p is storing (&n)
    this is so called 'dereference operator', which means,
    "go to the address in p ant take its value".
    It takes a memory address and tells you
    what data is stored there
     */
    printf("%i\n", *p);
}