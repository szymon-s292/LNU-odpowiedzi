int calcDigitNumber( int digit, int number )
{
    int count = 0;
    for(int i = 0; i <= number; i++)
    {
        int curr = i;
        while(curr > 0)
        {
            if( curr % 10 == digit )
                count++;
            curr /= 10;
        }
    }
    return count;
}
