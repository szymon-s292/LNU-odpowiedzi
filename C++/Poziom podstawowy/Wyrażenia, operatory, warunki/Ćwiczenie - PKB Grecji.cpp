// Zadanie:
// Na koniec 2005 roku PKB Grecji wynosił greece_gdp_2005. W kolejnych dziesięciu latach zmieniał się w następujący sposób:
// 1.   2006    +5.7 %
// 2.   2007    +3.3 %
// 3.   2008    -0.3 %
// 4.   2009    -4.3 %
// 5.   2010    -5.5 %
// 6.   2011    -9.1 %
// 7.   2012    -7.3 %
// 8.   2013    -3.2 %
// 9.   2014    +0.7 %
// 10. 2015    -0.2 %
// Uzupełnij funkcję calc_gdp_change w taki sposób, aby zwracała wartość PKB Grecji na koniec 2015 r. 

double calc_gdp_change( double greece_gdp_2005  )
{
    double greece_gdp_2015 = greece_gdp_2005;
    greece_gdp_2015 *= (1 + 5.7 / 100);
    greece_gdp_2015 *= (1 + 3.3 / 100);
    greece_gdp_2015 *= (1 - 0.3 / 100);
    greece_gdp_2015 *= (1 - 4.3 / 100);
    greece_gdp_2015 *= (1 - 5.5 / 100);
    greece_gdp_2015 *= (1 - 9.1 / 100);
    greece_gdp_2015 *= (1 - 7.3 / 100);
    greece_gdp_2015 *= (1 - 3.2 / 100);
    greece_gdp_2015 *= (1 + 0.7 / 100);
    greece_gdp_2015 *= (1 - 0.2 / 100);
    return greece_gdp_2015;
}
