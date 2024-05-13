int Round( double value )
{
    int n = (int)value;
    if(n + 0.5 <= value && value > 0)
        return n + 1;
    else if(n - 0.5 >= value && value < 0)
        return n - 1;
    return n;
}
