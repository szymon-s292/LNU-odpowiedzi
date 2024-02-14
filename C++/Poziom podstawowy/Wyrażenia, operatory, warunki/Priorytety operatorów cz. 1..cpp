// Zadanie:
// Napisz funkcję, która zwróci kwotę jaka została łącznie we wszystkich bankomatach na koniec dnia. 
// Aby uzyskać ilość banknotów znajdujących się w poszczególnych bankomatach, użyj funkcji getBanknoty( bank, nominal ),
// gdzie parametry bank i nominal są typami wyliczeniowymi zadklarownymi w pliku bankomat_api.h i oznaczają odpowiednio numer banku oraz rodzaj nominału. 
// Deklarację funkcji getBanknoty( bank, nominal ) zawiera plik bankomat_api.h. Pamiętaj, aby dołączyć go do kodu źródłowego za pomocą dyrektywy #include. 
#include "bankomat_api.h"

int bilansDnia( int subtract_100 )
{
    int ATM1 = (getBanknoty(BANK_POLSKI, NOMINAL_50) * 50) + (getBanknoty(BANK_POLSKI, NOMINAL_100) * 100) + (getBanknoty(BANK_POLSKI, NOMINAL_200) * 200);
    int ATM2 = (getBanknoty(BANK_LNU, NOMINAL_50) * 50) + (getBanknoty(BANK_LNU, NOMINAL_100) * 100) + (getBanknoty(BANK_LNU, NOMINAL_200) * 200);
    int ATM3 = (getBanknoty(BANK_ROBOTOW, NOMINAL_50) * 50) + (getBanknoty(BANK_ROBOTOW, NOMINAL_100) * 100) + (getBanknoty(BANK_ROBOTOW, NOMINAL_200) * 200);
    int A = ((getBanknoty(BANK_POLSKI, NOMINAL_50) * 50) / 2) +  (100 * subtract_100) + (200 * (subtract_100 + 1)); 
    int B = ((getBanknoty(BANK_LNU, NOMINAL_50) * 50) / 2) + ((getBanknoty(BANK_LNU, NOMINAL_100) * 100) / 2) + ((getBanknoty(BANK_LNU, NOMINAL_200) * 200) / 2);
    int C = ((getBanknoty(BANK_ROBOTOW, NOMINAL_50) * 50) / 2) + ((getBanknoty(BANK_ROBOTOW, NOMINAL_100) * 100) / 2) + ((getBanknoty(BANK_ROBOTOW, NOMINAL_200) * 200) / 2);
    return (ATM1 - A) + (ATM2 - B) + (ATM3 - C);
}
