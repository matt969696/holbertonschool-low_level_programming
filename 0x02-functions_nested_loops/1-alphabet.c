#include "holberton.h"
/**
 * print_alphabet - function code
 *
 * Return: Void
 */


void print_alphabet(void)
/* Function that prints alphabet */
{
	char l1;

	for (l1 = 'a'; l1 <= 'z' ; l1++)
		_putchar(l1);
	_putchar('\n');
}
