#include "main.h"

/**
* *_strstr - searches a string in a string
* @haystack: pointer to main string
* @needle: pointer to substring
* Return: s.
*/

char *_strstr(char *haystack, char *needle)
{

	for (; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *b = needle;

	while (*a == *b && *b != '\0')
	{
		a++;
		b++;
	}

	if (*b == '\0')
	{
	return (haystack);

	}
	}

	return ('\0');
}
