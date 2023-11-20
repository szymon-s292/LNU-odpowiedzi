int available_length( char str[], int max_length )
{
    int i = 0, c = 0;
    while(1)
    {
        if(str[i] == '\0')
            break;

        i++;
    }
    if(i > max_length) return -1;
    return max_length - i;
}
