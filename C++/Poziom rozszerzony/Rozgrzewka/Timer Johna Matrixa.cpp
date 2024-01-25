int timer ( short start_h, short start_m, short start_s, int time_left )
{
    int total = start_h * 3600 + start_m * 60 + start_s;
    total -= time_left;
    int h = total / 3600;
    total %= 3600;
    int m = total / 60;
    total %= 60;
    int s = total;
    return h * 10000 + m * 100 + s;
}
