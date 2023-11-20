long power( int base, unsigned int exponent)
{
    if(exponent == 1) return base;
    if(exponent == 0) return 1;
    else return base * power(base, exponent - 1);
}
