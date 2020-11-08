// Function pointers are a special type of variable that
// allows to decide which functions to call at runtime.

#include <stdio.h>

// Declare an addition function, since '+' is an operator,
// not a function
int add(int a, int b)
{
    return a + b;
}

// Declare a multiplication function, for the same reason
int mul(int a, int b)
{
    return a * b;
}

// C is a "pass by value" language: the values of arguments
// are copied to the parameters. When declaring a function
// parameter, it is implicitly changed to a function pointer.

// Try to change the signature of the function below,
// compile and compare the hash of the executables.
// They're identical.
// int do_operation(int a, int b, int (*f)(int, int))
int do_operation(int a, int b, int f(int, int))
{
    // equivalent to (*f)(a, b)
    return f(a, b);
}

int main(void)
{
    // When declaring a function pointer as a variable,
    // the pointer syntax is mandatory though.
    // int f(int, int) is not valid

    // When assigning a function address to a function pointer,
    // the compiler automatically changes a function to its
    // address: here, 'add' is the same as '&add'
    int (*f)(int, int) = add;

    printf("2 + 3 = %i\n", add(2, 3));
    printf("2 * 3 = %i\n", mul(2, 3));

    // The same it true when calling a function
    // The 2 lines below are identical to the 2 lines above
    (&printf)("2 + 3 = %i\n", (&add)(2, 3));
    (&printf)("2 * 3 = %i\n", (&mul)(2, 3));

    // That is why you don't actually need to dereference
    // the pointer to call the function:
    // add(2, 3) becomes (&add)(2, 3)
    // (*f)(2, 3) becomes f(2, 3)
    printf("f(2, 3) = %i\n", f(2, 3));
    printf("2 + 3 = %i\n", do_operation(2, 3, &add));
    printf("2 + 3 = %i\n", do_operation(2, 3, add));
    printf("2 + 3 = %i\n", do_operation(2, 3, f));
    printf("2 + 3 = %i\n", do_operation(2, 3, *f));

    return 0;
}
