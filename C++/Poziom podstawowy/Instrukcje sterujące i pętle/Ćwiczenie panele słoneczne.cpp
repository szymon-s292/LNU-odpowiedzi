double calc_efficiency( int Wp, int period )
{
    double moc = Wp;
    for(int i = 0; i < period; i++)
    {
       moc *= ( 1 - 0.0087 );
    }
    
    return moc;
}
