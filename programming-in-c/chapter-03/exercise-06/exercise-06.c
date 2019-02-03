// Justin D. Smith
// 3 February 2019
// Programming in C, Fourth Edition
// Exercise 3.6

// Evaluate the polynomial (3x³ - 5x² + 6) for x = 2.55 and display the result

#include <stdio.h>

int main(void)
{
    double x = 2.55; // Value of x

    // Evalute the polynomial and display the result
    float result = (3 * (x * x * x)) - (5 * (x * x)) + 6;
    printf("(3x³ - 5x² + 6) = %f for x = 2.55\n", result);

    return 0;
}
