#include <iostream>

using namespace std;

void wyswietlWynik (int wynik)
{
    cout << wynik << endl;
}

int dodaj ( int a, int b )
{
    return ( a + b );
}

int dzienMiesiaca()
{
    short int a, b, wynik;
    a = 7;
    b = 6;
    wynik = dodaj ( a, b );
    wyswietlWynik ( wynik );
    return wynik;
}
