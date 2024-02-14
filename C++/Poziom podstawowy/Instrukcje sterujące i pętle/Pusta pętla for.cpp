#include <iostream>

using namespace std;

void petla_for( void )
{
    for ( int x = 0, y = 1; x < 10; x++, y = y * 3, cout << x << " " << y << endl );
}
