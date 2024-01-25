int calcSign(char text[], char sign)
{
    int count = 0, i = 0;
    while(text[i] != '\0')
    {
        if(text[i] == sign)
            count++;

        i++;
    }
    return count;
}
