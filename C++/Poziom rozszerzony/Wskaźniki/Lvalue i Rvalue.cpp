/* Notka:
 * x = y = 5; // odpowiada zapisowi:
 * x = (y = 5);
 *  // lub
 * y = 5;
 * x = y;
 */

void findPrimes(bool arr[], int size)
{
    // Liczby 0 i 1 nie są pierwsze
    arr[0] = arr[1] = false;
    for(int i = 2; i < size; i++)
    {
        if(arr[i])
        {
            // Zaznacz liczby z 'i' w rozkładzie na czyniki
            int mult;
            for(int j = 2; (mult = i * j) < size; j++)
            {
                arr[mult] = false;
                mult=j*i;
            }
        }
    }
}
