#include "holberton.h"

/**
 * _islower - return 1 if character is in lower case, else 0
 *
 * @c: is an int
 *
 * Return: 0 or 1
 */


int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
