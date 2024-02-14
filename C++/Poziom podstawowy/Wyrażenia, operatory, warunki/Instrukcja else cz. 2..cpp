
int temperature( int temp_actual, int temp_desired ) 
{
    if(abs(temp_desired - temp_actual) == 0) return 0;
    if(abs(temp_desired - temp_actual) <= 2) return 1;
    if(abs(temp_desired - temp_actual) <= 5) return 2;
    if(abs(temp_desired - temp_actual) <= 10) return 5;
    if(abs(temp_desired - temp_actual) <= 20) return 10;
    if(abs(temp_desired - temp_actual) > 20) return 20;
    return 0;
}
