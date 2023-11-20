unsigned int find_exponent( unsigned int base, unsigned int value)
{
    int n = 0;
    int i = base;
    while(i <= value)
    {
        i *= base;
        n++;
    }
    return n;
}
