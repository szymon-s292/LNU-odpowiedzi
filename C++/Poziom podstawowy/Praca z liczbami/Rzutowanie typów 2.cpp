int Round( double value )
{
    int n = (int)value;
    if(n == value)
        return n;
    if(n + 0.5 <= value && value > 0)
        return n + 1;
    if(n - 0.5 >= value && value < 0)
        return n - 1;
}
