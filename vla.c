// Variable Length Arrays are dynamic arrays
// allocated on the STACK! Not on the heap like with malloc().
// Linus Torvalds (a guy that knows C pretty well) dislikes
// them. A lot. So much that there's none of them in the Linux
// kernel source code. But that's a cool feature to know.

#include <stdio.h>

void array(int size)
{
    char alpha[size];
    int x = 0;

    while (x < size)
    {
        alpha[x] = 'A' + x;
        putchar(alpha[x]);
        x++;
        if (x >= 26)
            break;
    }
    putchar('\n');
}

int main()
{
    array(5);
    array(20);
    array(9);
    array(39);

    return (0);
}
