#include <iostream>

using namespace std;

void zasieg( void )
{
    int x = 10;
    for ( int x = 0; x <= 0; x++ )
    {
         for ( int x = 30; x <=30; x++)
              std::cout << "wartość zmiennej x w drugiej pętli for: " << x << endl;
         std::cout << "wartość zmiennej x w pierwszej pętli for: " << x << endl;
    }
    std::cout << "wartość zmiennej x poza pętlą: " << x << endl;
}
