unsigned int sumOfFactorialDigits( unsigned short n)
{ 
    unsigned int f = 1;
    for(int i = 1; i <= n; i++)
    {
        f *= i;
    }
    unsigned int s = 0;
    while(f > 0)
    {
        s = s + (f % 10);
        f /= 10;
    }
    return s;
}
