// Justin D. Smith
// 3 February 2019
// Programming in C, Fourth Edition
// Exercise 3.4

// Convert 27 degrees from Fahrenheit to Celsius

#include <stdio.h>

int main(void)
{
    float F = 27; // 27 degrees Fahrenheit

    // Convert from Fahrenheit to Celsius and display the result
    float C = (F - 32) / 1.8;
    printf("%f° C\n", C);

    return 0;
}
