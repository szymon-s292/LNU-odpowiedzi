void report( unsigned short period_report[32] )
{
    unsigned int sum = 0;
    for(int i = 0; i < 31; i++)
        sum += period_report[i];

    period_report[31] = sum;
}
