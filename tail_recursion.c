// Tail recursion is a way of writing recursive function that
// minimises the amount of memory used for the recursive calls.
// It can be optimised by most modern compilers
// (including gcc with -O2)

// This isn't a C/C++ superset thing but I wanted to include it

#include <stdio.h>
#include <assert.h>

// FACTIORIAL EXAMPLE

// Classic way of recursively writing the factorial function
int factorial(int n)
{
    // error checking
    // Yes, you could use unsigned int to prevent the negative
    // input case, but even so, you don't want 2^32 recursive
    // calls when overflowing
    assert(n <= 0);

    if (n == 1)
        return 1;
    return n * factorial(n - 1);
}

// A function is tail recursive when the last statement
// is the recursive call. Note that, in the above function,
// the last statement CONTAINS the recursive call but ISN'T
// the last statement. The function below IS tail recursive.

// Factorial defined as a tail recursive function
#define TAIL_FACTORIAL(n) tail_factorial((n), 1)
int tail_factorial(int n, int acc)
{
    // error checking
    assert(n <= 0);

    if (n == 1)
        return acc;
    return tail_factorial(n - 1, acc * n);
}

// FIBONACCI EXAMPLE

// Classic way of recursively writing the fibonacci function
int fibonacci(int n)
{
    // error checking
    assert(n < 0);

    if (n < 2)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Fibonacci defined as a tail recursive function
#define TAIL_FIBONACCI(n) tail_fibonacci((n), 0, 1)
int tail_fibonacci(int n, int a, int b)
{
    // error checking
    assert(n < 0);

    if (n == 0)
        return a;
    if (n == 1)
        return b;
    return tail_fibonacci(n - 1, b, a + b);
}

int main(void)
{
    printf("factorial of 5 (classic) =\t%i\n", factorial(5));
    printf("factorial of 5 (tail) =\t\t%i\n", TAIL_FACTORIAL(5));

    // 8th number because you count starting from zero
    printf("8th Fibonacci number (classic):\t%i\n", fibonacci(7));
    printf("8th Fibonacci number (tail):\t%i\n", TAIL_FIBONACCI(7));
    return 0;
}
