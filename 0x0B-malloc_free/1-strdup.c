#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* *_strdup - duplicates string
* @str: string to be duplicated
* Return: p.
*/

char *_strdup(char *str)
{
	int i = 1, j;
	char *nw;

	if (str == NULL)
	{
	return (NULL);
	}

	while (str[i] != '\0')
	{
	i++;
	}

	nw = malloc((sizeof(char) * i) + 1);


	if (nw == NULL)
	{
	return (NULL);
	}



	j = 0;

	while (j < i)
	{
	nw[j] = str[j];
	j++;
	}

	nw[j] = '\0';

	return (nw);

}
