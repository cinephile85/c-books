#include <stdio.h>

int main (void)
{
    int n, number, triangularNumber;

    printf ("What triangular number do you want? ");
    scanf ("%i", &number);

    triangularNumber = 0;

    // Begin my code
    n = 1;
    while (n <= number)
    {
      triangularNumber += n;
      ++n;
    }
    // End my code

    printf ("Triangular number %i is %i\n", number, triangularNumber);

    return 0;
}
