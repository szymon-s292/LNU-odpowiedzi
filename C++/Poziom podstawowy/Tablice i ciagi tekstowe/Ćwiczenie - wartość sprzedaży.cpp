float sale_value( float sale_april[31][2], float exchange[31] )
{
    float sum = 0;
    for(int i = 0; i < 31; i++)
    {
        sum = sum + sale_april[i][0] * sale_april[i][1] * exchange[i];
    }
    return sum;
}
