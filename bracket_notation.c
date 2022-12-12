#include <stdio.h>

int main(void)
{
    int array[] = {42, 2, 69, 13};
    int i = 0;

    // Display element of aray at index 0
    printf("%i\n", array[i]);

    // perfectly valid code that does the same
    printf("%i\n", i[array]);
    // 'array[i]' is syntactic sugar for
    // '*(array + i)' and 'i[array]' is
    // syntactic sugar for '*(i + array)'
    // so this is essentially the same code.

    return 0;
}
