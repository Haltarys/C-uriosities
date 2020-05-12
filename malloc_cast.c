#include <stdlib.h>

int main()
{
    int *p = malloc(sizeof(int));
    // Fine with gcc, not with g++.
    // void * can be converted to any pointer
    // without the need to cast explicitly in C.
    free(p);
    return 0;
}
