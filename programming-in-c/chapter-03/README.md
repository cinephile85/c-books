# Chapter 3: Variables, Data Types, and Arithmetic Expressions

## Exercise 3.1

Type in and run the five programs presented in this chapter. Compare the output produced by each program with the output presented after each program in the text.

* [Program 3.1](exercise-01/prog3-1.c)
* [Program 3.2](exercise-01/prog3-2.c)
* [Program 3.3](exercise-01/prog3-3.c)
* [Program 3.4](exercise-01/prog3-4.c)
* [Program 3.5](exercise-01/prog3-5.c)

## Exercise 3.2

Which of the following are invalid variable names? Why?

```
Int               char       6_05
Calloc            XX         alpha_beta_routine
floating          _1312      Z
ReInitialize      _          A$
```

* `char` - reserved word
* `6_05` - begins with a number
* `A$` - contains an invalid character

## Exercise 3.3

Which of the following are invalid constants? Why?

```
123.456        0x10.5       0X0G1
0001           0xFFFF       123L
0xab05         0L           -597.25
123.5e2        .0001        +12
98.6F          98.7U        17777s
0996           -12E-12      07777
1234uL         1.2Fe-7      15,000
1.234L         197u         100U
0XABCDEFL      0xabcu       +123
```

* `0996` - leading zero denotes an octal integer, which only uses digits 0-7
* `0x10.5` - hexadecimal floating-point constants must be followed by p or P
* `98.7U` - only integers can be unsigned
* `1.2Fe-7` - F should be after the constant
* `+12` - positive values are not preceded by a plus sign
* `17777s` - there is no way to explicitly write a short constant
* `15,000` - commas are not allowed in constants
* `+123` - positive values are not preceded by a plus sign

## Exercise 3.4

Write a program that converts 27° from degrees Fahrenheit (F) to degrees Celsius (C) using the following formula:

`C = (F - 32) / 1.8`

* [Exercise 3.4](exercise-04/exercise-04.c)

## Exercise 3.5

What output would you expect from the following program?

```c
#include <stdio.h>

int main (void)
{
    char c, d;

    c = 'd';
    d = c;
    printf ("d = %c\n", d);

    return 0;
}
```

Expected output:

`d = d`

## Exercise 3.6

Write a program to evaluate the polynomial shown here:

`3x³ - 5x² + 6`

for x = 2.55.

* [Exericse 3.6](exercise-06/exercise-06.c)

## Exercise 3.7

Write a program that evaluates the following expression and displays the results (remember to use exponential format to display the result):

`(3.31 x 10⁻⁸ x 2.01 x 10⁻⁷) / (7.16 x 10⁻⁶ + 2.01 x 10⁻⁸)`

* [Exercise 3.7](exercise-07/exercise-07.c)

## Exercise 3.8

To round off an integer `i` to the next largest even multiple of another integer `j`, the following formula can be used:

`Next_multiple = i + j - i % j`

For example, to round off 256 days to the next largest number of days evenly divisible by a week, values of `i = 256` and `j = 7` can be substituted into the preceding formula as follows:

```
Next_multiple     = 256 + 7 - 256 % 7
                  = 256 + 7 - 4
                  = 259
```

## Exercise 3.9

Write a program to find the next largest even multiple for the following values of `i` and `j`:

```
i           j
365         7
12,258      23
996         4
```

* [Exercise 3.9](exercise-09/exercise-09.c)
