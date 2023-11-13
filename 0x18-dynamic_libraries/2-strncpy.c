#include "main.h"

/**
* *_strncpy - concatenate source to destination
* @src: first pointer
* @dest: second pointer
* @n: integer of bytes
* Return: Always 0.
*/

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;
	int sourcelen = 0;

	while (src[index++])
		sourcelen++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = sourcelen; index < n; index++)
		dest[index] = '\0';

	return (dest);

}
