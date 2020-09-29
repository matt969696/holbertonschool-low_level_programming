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
 * puts2 - prints every other character of a string
 *
 * @str : input string
 *
 * Return: Void
 */

void puts2(char *str)
{
	int i = 0;

	while (i <= _strlen(str))
	{
		_putchar(*(str + i));
		i += 2;
	}
	_putchar('\n');
}
