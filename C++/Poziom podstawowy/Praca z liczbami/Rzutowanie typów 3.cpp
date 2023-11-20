int Ceil( double value )
{
    int n = (int)value;
    if(n == value)
        return n;
    if(value > 0)
        return n + 1;

    if(value < 0)
        return n;
}
