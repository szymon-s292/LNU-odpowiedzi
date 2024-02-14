int suma ( int n )
{
    int wynik = 0, i = 1;
    while(i <= n)
    {
        wynik += i;
        i++;
    }
    return wynik;
}