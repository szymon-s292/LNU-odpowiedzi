int Floor( double value )
{
    int num = (int)value;
    if(value == num || value >= 0)
        return num;
    else
        return num - 1;
}
