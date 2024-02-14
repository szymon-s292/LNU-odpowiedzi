char decrypt( char z )
{
    if(z == 'a') return 'e';
    else if(z == 'e') return 'a';
    else if(z == 'i') return 'u';
    else if(z == 'u') return 'i';
    else if(z == 'o') return 'y';
    else if(z == 'y') return 'o';
    else return z;
}