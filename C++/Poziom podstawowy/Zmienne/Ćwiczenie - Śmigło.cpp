#include <iostream>

using namespace std;

float propeller_speed( float length )
{
    const double pi = 3.14159168;
    return 2 * pi * length;
}

void wyswietl()
{
    float dlugosc = 15;
    cout << "Prędkość śmigła = " << propeller_speed( dlugosc ) << " [ m/s ]";
}
