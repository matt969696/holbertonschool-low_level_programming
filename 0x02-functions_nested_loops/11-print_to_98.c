#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - print all the integer from n to 98
 *
 *@n : Starting integer
 *
 * Return: Void
 **/

void print_to_98(int n)
{
	int inc;

	if (n > 98)
		inc = -1;
	else
		inc = 1;

	while (n != 98)
	{
		printf("%i, ", n);
		n += inc;
	}

	printf("%i\n", 98);
}
