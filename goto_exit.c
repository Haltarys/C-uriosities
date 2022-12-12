int main()
{
    goto exit;
    int i = 42;

exit:
    // here, 'i' is accessible.
    // However, since it is potentially undefined,
    // we might read garbage from memory.
    // g++ doesn't allow this, while gcc does.
}
