#include "holberton.h"

/**
 * print_triangle -  draws a triangle in the terminal
 *
 * @n: dimesnsion of the triangle
 *
 * Return: Void
 **/

void print_triangle(int n)
{
	int i = 0;
	int j;

	while (i++ < n)
	{
		for (j = 0; j < n - i ; j++)
			_putchar(' ');
		for (j = n - i; j < n; j++)
			_putchar('#');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
