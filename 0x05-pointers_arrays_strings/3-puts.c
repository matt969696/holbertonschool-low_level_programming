#include <unistd.h>
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
 * _puts - return string on the stdout
 *
 * @str : string to be output
 *
 * Return: Void
 */

void _puts(char *str)
{
	int i;

	i = _strlen(str);
	write(1, str, i);
	write(1, "\n", 1);

}
