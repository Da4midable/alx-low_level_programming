#include "main.h"

/**
* swap_int - resets everything to 98
* @a: This is the first pointer
* @b: This is the second pointer
* Return: Always 0.
*/

	void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;

}
