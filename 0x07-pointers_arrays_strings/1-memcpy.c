#include "main.h"

/**
* *_memcpy - transforms all lower to upper
* @dest: destination of copies bytes
* @src: source to copy bytes from
* @n: default number of bytes in source memory area
* Return: Always s.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	unsigned int l;

	while (src[i++])
{
	l++;
}

	for (i = 0; src[i] && i < n; i++)
{
	dest[i] = src[i];
}
	for (i = l; i < n; i++)
{
	dest[i] = '\0';
}
	return (dest);
}
