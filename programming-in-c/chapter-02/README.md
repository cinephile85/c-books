# Chapter 2: Compiling and Running Your First Program

These are solutions to exercises from Chapter 2.

## Exercise 2.1

Type in and run the six programs presented in this chapter. Compare the output produced by each program with the output presented after each program in the text.

* [Program 2.1](exercise-01/prog2-1.c)
* [Program 2.2](exercise-01/prog2-2.c)
* [Program 2.3](exercise-01/prog2-3.c)
* [Program 2.4](exercise-01/prog2-4.c)
* [Program 2.5](exercise-01/prog2-5.c)
* [Program 2.6](exercise-01/prog2-6.c)

## Exercise 2.2

Write a program that prints the following text.  
  1. In C, lowercase letters are significant.  
  2. main() is where program execution begins.  
  3. Opening and closing braces enclose program statements in a routine.  
  4. All program statements must be terminated by a semicolon.

* [Exercise 2.2](exercise-02/exercise-02.c)

## Exercise 2.3

What output would you expect from the following program?

```c
#include <stdio.h>

int main (void)
{
    printf ("Testing...");
    printf ("....1");
    printf ("...2");
    printf ("..3");
    printf ("\n");

    return 0;
}
```

Expected output:

`Testing.......1...2..3`

## Exercise 2.4

Write a program that subtracts the value 15 from 87 and displays the result, together with an appropriate message, at the terminal.

* [Exercise 2.4](exercise-04/exercise-04.c)

## Exercise 2.5

Identify the syntactic errors in the following program. Then type in and run the corrected program to ensure you have correctly identified all the mistakes.

```c
#include <stdio.h>

int main (Void)
{
    INT sum;
    /* COMPUTE RESULT
    sum = 25 + 37 - 19
    /* DISPLAY RESULTS //
    printf ("The answer is %i\n" sum);
    return 0;
}
```

* [Exercise 2.5](exercise-05/exercise-05.c)

## Exercise 2.6

What output might you expect from the following program?

```c
#include <stdio.h>

int main (void)
{
    int answer, result;

    answer = 100;
    result = answer - 10;
    printf ("The result is %i\n", result + 5);

    return 0;
}
```

Expected output:

`The result is 95`
