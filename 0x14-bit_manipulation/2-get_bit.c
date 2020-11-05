#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index
 *
 * @n : input number
 * @index : required bit
 *
 * Return: value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return (1 & (n >> index));
}
