#include "main.h"
#include <stddef.h>
/**
* _strlen - calculates the length of a string
* @s: is the string of char type
* Return: Always 0.
*/

int _strlen(char *s)
{
size_t l = 0;

while (*s++)
l++;
return (l);

}
