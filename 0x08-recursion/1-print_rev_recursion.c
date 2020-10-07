#include "holberton.h"

/**
 * _print_rev_recursion - prints a string in reverse
 *
 * @s : string to print
 *
 * Return: Void
 */

void _print_rev_recursion(char *s)
{
	if (*s != 0)
	{
		s++;
		_print_rev_recursion(s);
		s--;
		_putchar(*s);
	}
}
