#include "main.h"

/**
 * binary_to_uint - converts binary to the unsigned integer
 * @b: pointer to a string of 0 and 1 chars
 * Return: conv.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int conv = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

			conv = 2 * conv + (b[i] - '0');
			i++;
	}

	return (conv);
}

