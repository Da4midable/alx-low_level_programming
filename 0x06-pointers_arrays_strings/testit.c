#include <stdio.h>

char *_strcat(char *dest, char *src)
{
    int a = 0;
    int b = 0;

    while (*(dest + a) != '\0')
    {
        a++;
    }
    
    
       

    while (*(src + b) != '\0')
    {
        b++;
        src[b] = dest[a] + src[b];
    }
        src[b] = '\0';
       
        return (dest);
}
