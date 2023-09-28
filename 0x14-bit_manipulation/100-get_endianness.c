#include "main.h"

/**
* get_endianness - checks endianness
* Return: void
*/


int get_endianness(void)

{
	unsigned int num = 1;
	char *byte_ptr = (char *)&num;

	return ((int)(*byte_ptr));
}
