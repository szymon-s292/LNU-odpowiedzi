extern int counter_free;
extern int counter_in;
extern int counter_out;

void count_cars( bool car_in, bool car_out )
{
    if(car_in)
    {
        counter_free--;
        counter_in++;
    }
    if(car_out)
    {
        counter_free++;
        counter_out++;
    }
}
