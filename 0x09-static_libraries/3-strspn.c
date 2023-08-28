#include "main.h"

/**
* *_strspn - searches a specific character
* @s: pointer to main string
* @accept: pointer to span
* Return: n.
*/

unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int n = 0;

	while (*s)

{
		for (i = 0; accept[i]; i++)
	{
			if (*s == accept[i])
		{
			n++;
			break;

		}
			else if (accept[i + 1] == '\0')
			return (n);
	}


	s++;

}

	return (n);
}
