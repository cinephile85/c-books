// Justin D. Smith
// 19 February 2019
// Programming in C, Fourth Edition
// Exercise 4.2

/* A program to generate and display a table of n and n²,
   for integer values of n ranging from 1 to 10           */

#include <stdio.h>

int main (void)
{
    int n;

    printf ("TABLE OF VALUES FOR n AND n²\n\n");
    printf (" n           n²\n");
    printf ("---        -----\n");

    // Calculate and display intgers from 1 to 10 and their squares
    for ( n = 1; n <= 10; ++n )
        printf ("%2i          %i\n", n, n * n);

    printf ("\n");

    return 0;
}
