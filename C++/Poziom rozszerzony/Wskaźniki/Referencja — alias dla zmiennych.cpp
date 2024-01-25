int* prodValOfKTLPaintSec;

int getCoef()
{
    if(prodValOfKTLPaintSec)
    {
        int a = *prodValOfKTLPaintSec;
        if(a == 120) return 1;
        else if(a >= 150) return 2;
        else return -1;
    }
    return -1;
}
