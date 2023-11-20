#include "xorEncrypt.h"

void xorEncrypt( char message[], char key[5] )
{
    int k = 0, i = 0;
    while(message[i] != '\0')
    {
        message[i] ^= key[k];
        (k == 4) ? k = 0 : k++;
        i++;
    }

    send_message(message);
}
