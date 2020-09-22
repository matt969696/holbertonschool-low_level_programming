#include "holberton.h"

/**
 * print_sign - Prints +, 0 or -
 *
 * @n: int variable
 *
 * Return: 0 or 1 or -1
 **/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	_putchar('0');
	return (0);
}
