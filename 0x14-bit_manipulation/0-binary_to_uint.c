#include "main.h"

/**
 * binary_to_uint - converts binary to the unsigned integer
 * @b: pointer to a string of 0 and 1 chars
 * Return: conv.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int conv = 0, i = 0, len;

	if (b == NULL)
		return (0);

	len = _strlen(b);
	while (i < len)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

			conv += (b[i] - '0') * my_pow(2, len - i - 1);
			i++;
	}

	return (conv);
}
