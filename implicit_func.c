int main(void)
{
    f();
    // Implicit declaration of functions
    // raises a warning with gcc but are
    // considered errors with g++.
    return 0;
}

int f()
{
    return 42;
}
