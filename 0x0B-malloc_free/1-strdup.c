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
	int i = 0, j;
	char *nw;



	while (str[i] != '\0')
	{
	i++;
	}

	nw = (char *) malloc(sizeof(char) * (i + 1));


	if (nw == NULL)
	{
	return (NULL);
	}


	j = 0;

	while (str[j] != '\0')
	{
	nw[j] = str[j];
	j++;
	}

	nw[j] = '\0';

	return (nw);
	free(nw);
}
