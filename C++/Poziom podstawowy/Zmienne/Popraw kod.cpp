//
// Zabawa : Popraw kod źródłowy
//

float msTokmh( float MS )
{
    float kmh;
    kmh = ( MS * 60 * 60) / 3600;
    return kmh;
}

bool obliczPredkosc( float czas, float droga )
{
    float predkosc = 0;
    predkosc = czas / droga;
    return predkosc;
}

float poprawKod( float czas, float droga )
{
    float predkosc = obliczPredkosc( czas, droga );
    predkosc = msTokmh( predkosc );
    return predkosc;
}
