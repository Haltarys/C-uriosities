int main()
{
    switch (1)
    {
    case sizeof(char):
    case sizeof('*'):;
        // In C, characters literals are of type int.
        // Therefore they are (usually) of size 4.
        // In C++, they are considered as chars,
        // and are therefore of size 1,
        // which causes a duplicate case value.
    }
    return 0;
}
