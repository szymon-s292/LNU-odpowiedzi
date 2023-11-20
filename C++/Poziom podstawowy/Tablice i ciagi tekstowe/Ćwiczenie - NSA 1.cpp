unsigned int compression( bool just_some_data[32] )
{
    unsigned int result = 0, maska = 1;
    for(int i = 31; i >= 0; i--)
    {

        if(just_some_data[i])
        {
            result |= maska;
        }
        maska *= 2;

    }
    return result;
}
