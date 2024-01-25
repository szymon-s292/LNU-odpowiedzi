int scoreDifferential(char gameTracking[], int n)
{
    unsigned int a = 0, b = 0;
    for(int i = 0; i < n; i++)
    {
        unsigned char mask = 1;
        for(int j = 0; j < 8; j++)
        {
            switch(mask & gameTracking[i])
            {
                case 1:
                    a += 1;
                    break;
                case 2:
                    a += 2;
                    break;
                case 4:
                    a += 3;
                    break;
                case 8:

                    break;
                case 16:
                    b += 1;
                    break;
                case 32:
                    b += 2;
                    break;
                case 64:
                    b += 3;
                    break;
                case 128:

                    break;
            }
            mask <<= 1;
        }
    }
    return abs(b - a);
}
