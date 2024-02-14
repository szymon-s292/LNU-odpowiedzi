int permutation( int n )
{
    int s = n;
    for(int i = n - 1; i > 0; i--)
    {
        s *= i;
    }
    return s;
}
