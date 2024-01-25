// Dlaczego x i y są const? Czy to jest konieczne?
// Nie, ALE jest to dobre praktyka.
// W ten sposób zapobiegamy przypadkowej zmianie wartości x i y

int** createMatrix(const size_t x, const size_t y)
{
    int** arr = new int* [x];

    for(unsigned int i = 0; i < x; i++)
        arr[i] = new int[y];

    return arr;
}
