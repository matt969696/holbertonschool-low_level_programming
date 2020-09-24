#include "holberton.h"

/**
 * print_square -  draws a square in the terminal
 *
 * @n: length of the line
 *
 * Return: Void
 **/

void print_square(int n)
{
	int i = 0;
	int j;

	while (i++ < n)
	{
		for (j = 0; j < n; j++)
			_putchar('#');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
