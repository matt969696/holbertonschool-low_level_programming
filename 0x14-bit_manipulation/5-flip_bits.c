#include "holberton.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another
 *
 * @n : input number1
 * @m : input number2
 *
 * Return: number of flip bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int div;
	unsigned int count;

	count = 0;
	div = 1;

	while (n / div > 0 || m / div > 0)
	{
		if ((n / div) % 2 != (m / div) % 2)
			count += 1;
		div *= 2;
	}

	return (count);
}
