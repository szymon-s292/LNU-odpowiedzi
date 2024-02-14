int pizza( int n, int k ) {
    int ilosc_kombinacji = 1;
    for( int i = 1; i <= k; ++i ) {
        ilosc_kombinacji = ilosc_kombinacji *( n - i + 1 ) / i;
    }
    return ilosc_kombinacji;
}