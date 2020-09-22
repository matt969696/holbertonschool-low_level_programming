#include "holberton.h"

/**
 * print_times_table - return the multiplication Table
 *
 *@n : max integer for multiplication
 *
 * Return: Void
 **/

void print_times_table(int n)
{
	int a, b, cen, diz, uni;

	if (n >= 0 && n <= 15)
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				cen = (a * b) / 100;
				diz = ((a * b) / 10) % 10;
				uni = (a * b) % 10;
				if (a * b >= 100)
				{
					_putchar(' ');
					_putchar('0' + cen);
					_putchar('0' + diz);
					_putchar('0' + uni);
				}
				else if (a * b >= 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + diz);
					_putchar('0' + uni);
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + uni);
				}
				if (b == n)
					_putchar('\n');
				else
					_putchar(',');
		}
	}
}
