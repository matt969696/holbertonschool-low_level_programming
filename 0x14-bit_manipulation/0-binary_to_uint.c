#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b : string containing binary
 *
 * Return: converted number, 0 if error
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int conv;

	i = 0;
	conv = 0;

	if (b == NULL)
		return (0);

	while (b[i])
	{
		if (b[i] == '0' || b[i] == '1')
			conv = conv * 2 + (b[i] - '0');
		else
			return (0);
		i++;
	}

	return (conv);
}
