#include <iostream>

using namespace std;

void multi_inicjalizacja( void )
{
    for ( int x = 1, y = 3; x <= 10; x++, y *= 3 )
        cout << x << " " << y << endl;
}
