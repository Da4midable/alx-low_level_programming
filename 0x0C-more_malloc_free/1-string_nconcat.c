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
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;
	char *c;

	while (i < n)
	{
		i++;
		len1++;
	}
	i = 0;
	while (i < n)
	{
		i++;
		len2++;
	}
	c = malloc(sizeof(char) * (len1 + len2 + 1));
	if (n == 0)
	{
		return (NULL);
	}
	if (c == NULL)
	{
		return (NULL);
	}
	if (c != 0)
	{
	for (i = 0, j = 0; s1[j] != '\0'; i++, j++)
	{
		c[i] = s1[j];
	}

	for (j = 0; j <= n; j++, i++)
	{
		c[i] = s2[j];
	}
	}
	c[i] = '\0';
	return (c);
}
