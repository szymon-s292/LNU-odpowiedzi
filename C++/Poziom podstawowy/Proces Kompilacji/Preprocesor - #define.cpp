// Zadanie:
// W programie kilkukrotnie użyto stałej ratio1, która jednak nie została wcześniej zdefiniowana ani zainicjowana (czyli nie przypisano jej wartości).
// Użyj dyrektywy #define, aby preprocesor zamienił symbol ratio1 na wartość 0.47.

#include <iostream>
using namespace std;

#define RATIO1 0.47
#define DT      20

double obliczNastaw( double ep )
{
    int C = 0;  // część całkująca
    int Kp = 1; // wzmocnienie
    int Ti = 1; // stała całkowania
    int Td = 0; // stała różniczkowania
    int en;     // uchyb następny
    int U;      // sygnał sterujący
    
    en = ep * RATIO1;
    C += ( ( ep + en ) / 2 ) * DT;
    U = Kp * ( en + ( 1 / Ti ) * C / 1000 + Td * ( en - ep ) * 1000 / DT );
    return U;
}

double grzalka( double temp_otoczenia )
{
    double temp_grzania = obliczNastaw( temp_otoczenia ) * RATIO1;
    std::cout << "Temperatura ogrzewania = " << temp_grzania << endl;
    return temp_grzania;
}
