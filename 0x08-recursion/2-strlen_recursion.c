#include "main.h"

/**
*  _strlen_recursion - recursive function that computes string length
* @s: pointer to string
* Return: void
*/

int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{

		return (0);

	}

	else
	{
		s++;
		return (_strlen_recursion(s) + 1);
	}
}
