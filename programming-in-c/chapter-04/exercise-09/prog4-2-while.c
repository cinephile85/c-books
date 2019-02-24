#include <stdio.h>

int main (void)
{
    int n, triangularNumber;

    triangularNumber = 0;

    // Begin my code
    n = 1;
    while (n <= 200)
    {
      triangularNumber = triangularNumber + n;
      n = n + 1;
    }
    // End my code

    printf ("The 200th triangular number is %i\n", triangularNumber);

    return 0;
}
