#include "holberton.h"

/**
 * _strlen - returns the length of a string
 *
 * @s : string
 *
 * Return: len of the String
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i++;

	return (i);
}


/**
 * puts_half - prints half of a string
 *
 * @str : input string
 *
 * Return: Void
 */

void puts_half(char *str)
{
	int i;
	int length;

	length = _strlen(str);
	i = (length + 1) / 2;

	while (i <= length)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
