#include <stdio.h>

typedef struct s
{
    char c;
    int i;
} s_t;

typedef struct packed_s
{
    char c;
    int i;
} __attribute__((packed)) packed_t;
// The 'packed' attribute specifies that instances of this specific
// struct will have no padding between its members

int main(void)
{
    // Various ways of setting the fields of a struct
    struct s s1;
    // you can do it field by field
    s1.c = 'a';
    // remember that character literals are considered as
    // int values, so the following line is perfectly valid
    s1.i = '*';

    // You can also set their values at the declaration
    // This ONLY works at the declaration of the struct
    struct s s2 = {'\n', -3};

    // Alternative syntax
    // the typedef allows us to use s_t instead of 'struct s'
    s_t s3 = {.c = 'A', .i = 1};

    (void)s2;
    (void)s3;

    printf("size of a char = %lu\n", sizeof(char));  // 1
    printf("size of an int = %lu\n", sizeof(int));   // 4
    printf("size of a struct s = %lu\n", sizeof s1); // 8

    // the size of the struct is bigger than the sum of the sizes
    // of its members.
    // That is because, for optimisation purposes, the members
    // of a struct are not always adjacent in memory. The 'padding'
    // as it is called is platform-dependent.
    // You can remove the padding via attributes
    // or compilation flags.

    // The size of the packed struct is equal to the sum of the
    // size of its members (1 + 4 = 5)
    printf("size of a packed struct s = %lu\n", sizeof(packed_t));

    // With the gcc '-fpack-struct' flag, all structs are packed
    return 0;
}
