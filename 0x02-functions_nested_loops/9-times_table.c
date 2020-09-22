#include "holberton.h"

/**
 * times_table - return the multiplication Table
 *
 * Return: Void
 **/

void times_table(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (a * b >= 10)
			{
				_putchar(' ');
				_putchar('0' + (a * b) / 10);
				_putchar('0' + (a * b) % 10);
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + a * b);
			}

			if (b == 9)
				_putchar('\n');
			else
				_putchar(',');
		}
	}
}
