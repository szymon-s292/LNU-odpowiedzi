unsigned int quality_report( bool quality_check[1000] )
{
    unsigned int broken = 0;
    for(int i = 0; i < 1000; i++)
        if(!quality_check[i])broken++;

    return broken;
}
