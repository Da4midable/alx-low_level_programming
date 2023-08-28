#include "main.h"

/**
* *_memset - transforms all lower to upper
* @s: is the string
* @b: is the constant bytes assigned
* @n: default number of bytes in the memory area
* Return: Always s.
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;


	while (i < n)
	{
		s[i] = b;

		i++;

	}
		return (s);
}
