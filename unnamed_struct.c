// In C, you can define unnamed struct.
// gcc outputs a warning saying that this
// struct/union defines no instances, but
// does compile either way. Indeed, you need
// a type name to declare a variable, therefore
// you need a named (or typedef named) struct to
// declare an instance of it.
// g++ treats this case as an error though.

typedef struct
{
    // empty struct are perfectly valid btw
    // their size is 0 of course
};

int main(void)
{
    return 0;
}
