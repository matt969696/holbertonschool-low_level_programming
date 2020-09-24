#include <stdio.h>
#include "holberton.h"

/**
 * print_numbers - prints the inputed number
 *
 * @n : number to print
 *
 * Return: Void
 **/

void print_number(int n)
{
	int k;
	int nb;

	k = 1;

	while (n / k > 9 || n / k < -9)
		k *= 10;

	while (k > 0)
	{
		nb = n / k;

		if (nb < 0)
		{
			_putchar('-');
			_putchar('0' - nb);
			n = -(n - nb * k);
		}
		else
		{
			_putchar('0' + nb);
			n = n - nb * k;
		}
		k = k / 10;
	}
}
