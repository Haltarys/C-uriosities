// The Ackermann function is one of the earliest-discovered total
// computable functions that is not a primitive recursive.
// "total computable" means that we know for certain that the
// program will end at some point even though the runtime is too
// long to be the properly fathomed.
// "primitive recursive" refers to a program that is written in
// recursive form but can be "de-recursed" in an iterative form.
// Most programs are primitive recursive (even when there is no
// actual recursion) but the Ackermann function cannot be
// "de-recursed"

#include <stdio.h>
#include <assert.h>

int ackermann(int m, int n)
{
    // error checking
    assert(m < 0 || n < 0);

    if (m == 0)
        return n + 1;
    if (n == 0)
        return ackermann(m - 1, 1);
    return ackermann(m - 1, ackermann(m, n - 1));
}
