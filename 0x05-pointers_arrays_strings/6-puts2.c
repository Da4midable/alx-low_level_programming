#include "main.h"
/**
* puts2 - calculates the length of a string
* @str: is the string of char type
* Return: Always 0.
*/

void puts2(char *str)
{
	while (*str != '\0')
{
	_putchar(*str);
	str += 2;
}
	_putchar('\n');

}
