// Justin D. Smith
// 3 February 2019
// Programming in C, Fourth Edition
// Exercise 3.6

// Evaluate the polynomial (3x³ - 5x² + 6) for x = 2.55

#include <stdio.h>

int main(void)
{
    double x = 2.55;
    float result = (3 * (x * x * x)) - (5 * (x * x)) + 6;

    printf("%f\n", result);

    return 0;
}
