#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* *string_nconcat - duplicates string
* @s1: first string
* @s2: second string
* @n: bytes
* Return: c.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k = 0, l = 0;
	char *c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
	{
		i++;
	}
	while (s2[k])
	{
		k++;
	}
	if (n >= k)
		l = i + k;
	else
		l = i + n;
	c = malloc(sizeof(char) * l  + 1);
	if (c == NULL)
	{
		return (NULL);
	}
	k = 0;
	while (j < l)
	{
		if (j <= i)
			c[j] = s1[j];
		if (j >= i)
		{
			c[j] = s2[k];
			k++;
		}
		j++;
	}

	c[j] = '\0';
	return (c);
}
