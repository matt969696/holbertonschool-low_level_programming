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
	unsigned int i;
	unsigned int count;

	i = 0;
	count = 0;
	while ((n >> i || m >> i) && i < 64)
	{
		count += 1 & ((n >> i) ^ (m >> i));
		i++;
	}

	return (count);
}
