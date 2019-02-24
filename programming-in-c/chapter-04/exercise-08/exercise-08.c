#include <stdio.h>

int main (void)
{
    int to_calculate, n, number, triangularNumber, counter;

    printf ("How many triangular numbers do you want to calculate? ");
    scanf ("%i", &to_calculate);
    printf ("\n");

    for ( counter = 1; counter <= to_calculate; ++counter ) {
        printf ("What triangular number do you want? ");
        scanf ("%i", &number);

        triangularNumber = 0;

        for ( n = 1; n <= number; ++n )
            triangularNumber += n;

        printf ("Triangular number %i is %i\n\n", number, triangularNumber);
    }

    return 0;
}
