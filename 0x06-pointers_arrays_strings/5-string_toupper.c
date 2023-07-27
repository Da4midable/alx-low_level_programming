#include "main.h"

/**
* string_toupper - transforms all lower to upper
* @up: string
* Return: Always up.
*/

char *string_toupper(char *up)
{
	int index;

	while (up[index] != '\0')
	{
		if (up[index] >= 'a' && up[index] <= 'z')
	{
		up[index] = (up[index] - 32);
	}
		index++;

	}
		return (up);
}
