void decompression(unsigned int just_some_compressed_data, bool just_some_data[32])
{
    unsigned int maska = 1;
    for(int i = 31; i >= 0; i--)
    {
        if(maska & just_some_compressed_data)
            just_some_data[i] = true;
        else
            just_some_data[i] = false;
        maska *= 2;
    }
}
