// Zadanie:
// Ilu mieszkańców liczy w tym miejscu historii Daisy Town? Uzupełnij funkcję calcCitizens, aby jako wynik zwróciła tę wartość.

int calcCitizens( int totalCitizens )
{
    int members = 0;
    totalCitizens *= 2;
    totalCitizens += 4;
    totalCitizens -= 8;
    totalCitizens *= 0.75;
    members = (int)totalCitizens + 1;
    return members;
}
