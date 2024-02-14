// Zadanie:
// zespół aparatów fotograficznych zainstalowany na dachu samochodu znanego koncernu tworzącego ogólnodostępne mapy internetowe powinien robić zdjęcia co 4 metry.
// Uzupełnij funkcję bool get_photo(int counter) gdzie parametr counter jest licznikiem przejechanych metrów w taki sposób,
// aby przyjmowała wartość true jeśli z wartości wskazywanej przez licznik wynika, że powinno zostać wykonane zdjęcie lub false - w przeciwnym przypadku.

bool get_photo( int counter )
{
    if(counter % 4 == 0) return true;
    return false;
}
