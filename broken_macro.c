#include <time.h>
#include <stdlib.h>
#include <stdio.h>

#define MAX(a, b) ((a) > (b)) ? (a) : (b)

int main(void)
{
    srand(time(NULL));

    for (int i = 0; i < 10; i++)
    {
        int max = MAX(5, rand() % 10);
        printf("max = %i\n", max);

        // max should be between 5 and 9
        // but is doesn't work because
        // MAX is not a function, it is a macro.
        // When expanded, the code becomes:
        // ((5) > (rand() % 10)) ? (5) : (rand() % 10)
        // Hence the 'incoherent' results
    }

    return 0;
}
