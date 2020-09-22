#include "holberton.h"

/**
 * print_alphabet_x10 - print the alphabet 10 times
 *
 * Return: 1
 */


void      print_alphabet_x10(void)
{
	char l1;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (l1 = 'a'; l1 <= 'z' ; l1++)
			_putchar(l1);
		_putchar('\n');
	}
}
