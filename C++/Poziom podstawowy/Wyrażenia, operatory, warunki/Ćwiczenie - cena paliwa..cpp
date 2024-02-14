// Zadanie:
// znany koncern paliwowy zmieniał ceny hurtowe m3 paliwa w okresie kolejnych pięciu tygodni ze względu na wahania cen surowca oraz zmiany w wysokości podatku akcyzowego.
// Uzupełnij funkcję calcFuelPrice tak, aby zwracała hurtową cenę paliwa po ostatniej zmianie, w przeliczeniu na jeden litr.

double calcFuelPrice( double cena_m3  )
{
    cena_m3 *= 1.008; 
    cena_m3 *= 1.012;
    cena_m3 += 26.3;  
    cena_m3 *= (1 - 0.9 / 100);
    cena_m3 *= (1 - 3.3 / 100);
    return cena_m3 / 1000;
}
