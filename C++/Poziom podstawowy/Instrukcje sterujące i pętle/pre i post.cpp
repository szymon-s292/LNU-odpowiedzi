#include <iostream>

using namespace std;

void pre_and_post( void )
{
    int x = 0, y = 0;
    x = y++ + 3;
    cout << "x = y++ + 3 = " << x << endl;
    
    x = 0, y = 0;
    x = ++y + 3;
    cout << "x = ++y + 3 = " << x << endl;

    x = 2, y = 3;
    x += y++;
    cout << "x += y++ = " << x << endl;

    x = 2, y = 3;
    x += ++y;
    cout << "x += ++y = " << x << endl;
}
