bool confirm_code ( char code_recieved[], char code_base[] )
{
    for(int i = 0; i < 10; i++)
        if(code_base[1] != code_recieved[i])
            return false;
    return true;
}
