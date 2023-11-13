#include "main.h"

/**
* *_strpbrk - searches a set of characters
* @s: pointer to main string
* @accept: pointer to found set
* Return: s.
*/

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)

{
		for (i = 0; accept[i]; i++)
	{
			if (*s == accept[i])

			return (s);

	}

	s++;
}

	return ('\0');
}
