#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* **str_concat - duplicates string
* @s1: first string
* @s2: second string
* Return: .
*/

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	char *c;

	if (s1 == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[i] != '\0')
	{
		i++;
			}
	c = malloc(sizeof(char) * (i + 1));
	if (c == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (s1[j] != '\0')
	{
		c[i] = s1[j];
		i++;
		j++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		c[i] = s2[j];
		i++;
		j++;
	}
		c[i] = '\0';
	return (c);
	free(c);
}
