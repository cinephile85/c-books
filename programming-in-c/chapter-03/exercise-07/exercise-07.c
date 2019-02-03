// Justin D. Smith
// 3 February 2019
// Programming in C, Fourth Edition
// Exercise 3.7

// Evaluate the expression (3.31 x 10⁻⁸ x 2.01 x 10⁻⁷) / (7.16 x 10⁻⁶ + 2.01 x 10⁻⁸)
// And display the result

#include <stdio.h>

int main(void)
{
    //  Evaluate the expression and display the result
    long double result = (3.31e-8L * 2.01e-7L) / (7.16e-6L + 2.01e-8L);
    printf("(3.31 x 10⁻⁸ x 2.01 x 10⁻⁷) / (7.16 x 10⁻⁶ + 2.01 x 10⁻⁸) = %Le\n", result);

    return 0;
}
