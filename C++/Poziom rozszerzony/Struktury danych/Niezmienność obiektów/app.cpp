// Code here...
int countDisplayed(const Exhibit* arr, size_t n, Theme t)
{
    int count = 0;
    if(arr)
    {
        for(size_t i = 0; i < n; i++)
        {
            if(arr[i].theme == t && arr[i].onDisplay) count++;
        }
    }
    return count;
}
