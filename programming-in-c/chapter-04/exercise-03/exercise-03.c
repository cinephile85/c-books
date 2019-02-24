// Justin D. Smith
// 23 February 2019
// Programming in C, Fourth Edition
// Exercise 4.3

/* A program to generate and display a table of every
   fifth triangular number between 5 and 50           */

#include <stdio.h>

int main(void)
{
  int n, triangularNumber;

  printf("TABLE OF FIFTH TRIANGULAR NUMBERS BETWEEN 5 AND 50\n\n");
  printf(" n           Triangular Number\n");
  printf("---          -----------------\n");

  /* Calculate and display every fifth number between
     5 and 50 and its correspsonding triangular number */
  for (n = 5; n <= 50; n += 5)
  {
    triangularNumber = (n * (n + 1)) / 2;
    printf("%2i                  %i\n", n, triangularNumber);
  }

  printf("\n");

  return 0;
}
