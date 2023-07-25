#include "main.h"
/**
* rev_string - prints in reverse
* @s: is the string of char type
* Return: Always 0.
*/

void rev_string(char *s)
{
	int rever = 0;
	int index = 0;
	char face_back;

	while (s[index++])
{
	rever++;
}

	for (index = rever - 1; index >= rever / 2; index--)
{
	face_back = s[index];
	s[index] = s[rever - index - 1];
	s[rever - index - 1] = face_back;
}


}
