unsigned int lipsticks_per_month( unsigned short lipsticks_per_day[] )
{
    unsigned int sum = 0;
    for(int i = 0; i < 31; i++)
        sum += lipsticks_per_day[i];

    return sum;
}
