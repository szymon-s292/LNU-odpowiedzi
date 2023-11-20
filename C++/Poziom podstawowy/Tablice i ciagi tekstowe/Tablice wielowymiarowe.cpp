int rtg_check( unsigned short rtg_picture[25][25] )
{
    int avg = 0;

    for(int i = 0; i < 25; i++)
        for(int j = 0; j < 25; j++)
            avg += rtg_picture[i][j];

    avg /= 625;

    int pixels = 0;
    for(int i = 0; i < 25; i++)
        for(int j = 0; j < 25; j++)
            if(rtg_picture[i][j] > (avg*1.5) || rtg_picture[i][j] <= (avg/2))
                pixels++;

    return pixels;
}
