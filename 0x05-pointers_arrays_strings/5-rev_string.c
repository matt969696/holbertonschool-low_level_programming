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
 * rev_string - reverse a string
 *
 * @s : string to be reversed
 *
 * Return: Void
 */

void rev_string(char *s)
{
	int i = 0;
	int length;
	char letter;

	length = _strlen(s) - 1;

	while (i <= length / 2)
	{
		letter = *(s + i);
		*(s + i) = *(s + length - i);
		*(s + length - i) = letter;
		i++;
	}

}
