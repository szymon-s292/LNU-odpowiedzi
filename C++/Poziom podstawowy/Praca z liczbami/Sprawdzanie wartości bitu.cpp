bool return_flag (unsigned char flags, int flag)
{
    unsigned int maska = 1;
    for(int i = 0; i < flag; i++)
    {
        maska *= 2;
    }
    if(flags & maska) return true;
    else return false;
}
