int main()
{
    for (int i = 0; i < 5; i++)
    {
        int i = 42;
        // Fine with gcc, because head and body
        // of for loop are distinct scopes.
        // Not with g++.
    }

    return 0;
}
