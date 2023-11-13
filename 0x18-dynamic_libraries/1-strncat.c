#include "main.h"

/**
* *_strncat - concatenate source to destination
* @src: first pointer
* @dest: second pointer
* @n: integer of bytes
* Return: Always 0.
*/

char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;
;

while (dest[i++])

j++;


for (i = 0; src[i] && i < n; i++)

dest[j++] = src[i];

return (dest);
}

