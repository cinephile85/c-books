/* This program subtracts one integer value from another and
   displays the result                                      */

#include <stdio.h>

int main (void)
{
    int value1, value2, difference;

    value1 = 87;
    value2 = 15;
    difference = value1 - value2;

    printf ("%i subtracted from %i is %i\n", value2, value1, difference);

    return 0;
}
