unsigned int check_availability ( unsigned char lipsticks_in_store[25][2], unsigned char article )
{
    for(int i = 0; i < 25; i++)
        if(article == lipsticks_in_store[i][0])
            return lipsticks_in_store[i][1];
}
