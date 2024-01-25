// Zapewne napiszesz bardzo fajną funkcję
// Szkoda by było gdyby otrzymała wskaźnik na nullptr...

int getPtrInx(int* arr, int* ptr, int n)
{
    if(arr && ptr)
    {
        int idx = 0;
        for(int* i = arr; i < arr + n; i++)
        {
            if(i == ptr) return idx;
            idx++;
        }
    }
    return -1;
}
