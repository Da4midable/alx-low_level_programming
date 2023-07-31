#include "main.h"

/**
* *_strchr - searches a specific character
* @s: pointer
* @c: character to be searched
* Return: Always null.
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
{
	if (s[i] == c)
{
	return (s + i);
}
	i++;
}
	return ('\0');
}
