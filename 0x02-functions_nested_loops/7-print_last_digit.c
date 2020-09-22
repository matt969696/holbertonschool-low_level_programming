#include "holberton.h"

/**
 * print_last_digit - return the last digit of an integer
 *
 * @n: int variable
 *
 * Return: last digit of an integer
 **/

int print_last_digit(int n)
{
	if (n > 0)
	{
		_putchar(n % 10 + '0');
		return (n % 10);
	}
	_putchar(-n % 10 + '0');
	return (-n % 10);
}
