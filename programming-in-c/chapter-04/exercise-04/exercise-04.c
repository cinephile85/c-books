// Justin D. Smith
// 23 February 2019
// Programming in C, Fourth Edition
// Exercise 4.4

// A program to generate and print a table of every the first 10 factorials

#include <stdio.h>

int main(void)
{
  int n, factorial;

  printf("TABLE OF FACTORIALS OF 1 TO 10\n\n");
  printf(" n           n!\n");
  printf("---       -------\n");

  // Calculate and print the factorials of 1 to 10
  for (n = 1, factorial = 1; n <= 10; n++)
  {
    factorial *= n;

    printf("%2i        %i\n", n, factorial);
  }

  printf("\n");

  return 0;
}
