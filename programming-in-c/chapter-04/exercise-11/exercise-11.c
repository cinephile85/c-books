// Justin D. Smith
// February 23 2019
// Programming in C, Fourth Edition
// Exercise 4.11

// A program that calculates the sum of the digits of an integers

#include <stdio.h>

int main(void)
{
  int number, last_digit, sum = 0;

  // Prompt the user to input an integer
  printf("Enter an integer to add its digits ");
  scanf("%i", &number);

  // Add the digits of the number
  while (number != 0)
  {
    last_digit = number % 10;
    sum += last_digit;
    number /= 10;
  }

  // Print the sum of the digits
  printf("The sum of the digits is %i\n", sum);

  return 0;
}
