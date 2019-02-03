// Justin D. Smith
// 3 February 2019
// Programming in C, Fourth Edition
// Exercise 3.9

// Find the next largest multiple of integer j after integer i and display the result

#include <stdio.h>

int main(void)
{
    int i, j;
    int Next_multiple;

    // Find the next largest multiple of 7 after 365 and display the result
    i = 365, j = 7;
    Next_multiple = i + j - i % j;
    printf("The next largest multiple of 7 after 365 is %i\n", Next_multiple);

    // Find the next largest multiple of 23 after 12258 and display the result
    i = 12258, j = 23;
    Next_multiple = i + j - i % j;
    printf("The next largest multiple of 23 after 12258 is %i\n", Next_multiple);

    // Find the next largest multiple of 4 after 996 and display the result
    i = 996, j = 4;
    Next_multiple = i + j - i % j;
    printf("The next largest multiple of 4 after 996 is %i\n", Next_multiple);

    return 0;
}
