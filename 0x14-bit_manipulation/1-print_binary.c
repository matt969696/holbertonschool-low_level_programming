#include "holberton.h"

/**
 * print_binary_rec - prints the binary representation of a number
 *
 * @n : input number
 *
 * Return: Void
 */

void print_binary_rec(unsigned long int n)
{
	if (n != 0)
	{
		print_binary_rec(n >> 1);
		_putchar((n & 1) + '0');
	}
}

/**
 * print_binary - prints the binary representation of a number
 *
 * @n : input number
 *
 * Return: Void
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		print_binary_rec(n);
}
