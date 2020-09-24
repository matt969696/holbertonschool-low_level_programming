#include "holberton.h"

/**
 * print_line -  draws a straight line in the terminal
 *
 * @n: length of the line
 *
 * Return: Void
 **/

void print_line(int n)
{
	int i = 0;

	while (i++ < n)
		_putchar('_');
	_putchar('\n');
}
