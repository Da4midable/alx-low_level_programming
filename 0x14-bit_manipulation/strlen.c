#include "main.h"
/**
* _strlen - calculates the length of a string
* @s: is the string of char type
* Return: Always 0.
*/

int _strlen(const char *s)
{
unsigned int l = 0;

while (*s++)
l++;
return (l);

}
