// Zadanie : W zakładce <nazwa zakładki> znajduje się program, w który wywołuje funkcję <nazwa funkcji>.
// Deklaracja i definicja tej funkcji znajduje się  w pliku <nazwa pliku>, który widzisz w drugiej zakładce.
// Użyj dyrektywy preprocesora #include, aby dołączyć zawartość pliku <nazwa pliku> do kodu źródłowego programu.
#include <iostream>
#include "zalacznik.cpp"
using namespace std;



void program( void )
{
    cout << "Startujemy " << endl;
    start();
    cout << "Uruchamiamy załącznik " << endl;
    zalacznik();
}
