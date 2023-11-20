unsigned char turn_on_flag(unsigned char flags, int flag)
{
    unsigned int maska = 1;
    for(int i = 0; i < flag; i++)
    {
        maska *= 2;
    }
    flags |= maska;
    return flags;
}
