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
	c = malloc(sizeof(char) * (l  + 1));
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
	for (j = 0; j < n; j++, i++)
	{
		c[i] = s2[j];
	}
	}
	c[i] = '\0';
	return (c);
}
