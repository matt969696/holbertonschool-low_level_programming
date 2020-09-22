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
	int res;

	res = n % 10;
	if (res < 0)
		res = -res;
	_putchar(res + '0');
	return (res);
}
