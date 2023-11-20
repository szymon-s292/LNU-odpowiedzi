#include <math.h>
void kafelki( const double R, int &c, int &p )
{
    double x = 0.0;
    int cc, pp;
    while(x < R)
    {
        pp = (int) std::ceil(std::sqrt(R * R - x * x));
        cc = 0;
        if(x + 1.0 <= R) cc= (int) std::floor(std::sqrt(R * R - (x + 1.0) * (x + 1.0)));
        pp -= cc;
        c += 4 * cc;
        p += 4 * pp;
        x += 1.0;
    }
}
