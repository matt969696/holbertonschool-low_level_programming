#include "holberton.h"

/**
 * print_diagonal -  draws a diagonal line in the terminal
 *
 * @n: length of the line
 *
 * Return: Void
 **/

void print_diagonal(int n)
{
	int i = 0;
	int j;

	while (i++ < n)
	{
		for (j = 0; j < i - 1; j++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
