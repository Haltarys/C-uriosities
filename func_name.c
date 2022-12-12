// You can print the current function's name
// Useful when debugging a call stack

#include <stdio.h>

void recursive_func(unsigned int i)
{
    printf("%s\n", __func__);
    if (i)
    {
        recursive_func(i - 1);
    }
}

void some_function(void)
{
    printf("%s\n", __func__);
}

int main(int argc, char const *argv[])
{
    void (*func_ptr)(void) = &some_function;

    printf("%s\n", __func__);
    func_ptr();
    recursive_func(2);
    return 0;
}
