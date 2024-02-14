int suma_wyrazow_ciagu ( int n )
{
    int suma = 0, licznik = 1;
    for(int i = 0; i < n; i++)
    {
        suma += licznik * licznik;
        if ( ++licznik <= n );
    }
    return suma;
}