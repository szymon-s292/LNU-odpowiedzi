// Niestety coraz częściej pliki będą puste :/
void moveTimeByMin(unsigned int& h, unsigned int& m, unsigned int min)
{
    m += min;
    while(m > 59)
    {
        m -= 60;
        h++;
    }
}
