#include "main.h"
/**
* _puts - calculates the length of a string
* @str: is the string of char type
* Return: Always 0.
*/

void _puts(char *str)
{
	while (*str != '\0')
{
	_putchar(*str++);
}
	_putchar('\n');

}
