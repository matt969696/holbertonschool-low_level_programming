#include "holberton.h"

/**
 * jack_bauer - return the minutes in the life of Jack Bauer
 *
  * Return: 0
 **/

void jack_bauer(void)
{
	int hh;
	int mm;

	for (hh = 0; hh < 24; hh++)
	{
		for (mm = 0; mm < 60; mm++)
		{
			_putchar('0' + hh / 10);
			_putchar('0' + hh % 10);
			_putchar(':');
			_putchar('0' + mm / 10);
			_putchar('0' + mm % 10);
			_putchar('\n');
		}
	}
}
