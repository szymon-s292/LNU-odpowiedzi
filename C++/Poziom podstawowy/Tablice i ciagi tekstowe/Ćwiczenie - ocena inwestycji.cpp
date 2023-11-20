int get_evaluation( int evaluation[15][3] )
{
    int avg1 = 0, avg2 = 0, w = 0;
    for(int i = 0; i < 15; i++)
    {
        avg1 = avg1 + evaluation[i][0] * evaluation[i][2];
        avg2 = avg2 + evaluation[i][1] * evaluation[i][2];
        w += evaluation[i][2];
    }
    avg1 /= 15;
    avg2 /= 15;

    if(avg1 == avg2) return 0;
    else if(avg1 > avg2) return 1;
    else if(avg1 < avg2) return 2;
}
