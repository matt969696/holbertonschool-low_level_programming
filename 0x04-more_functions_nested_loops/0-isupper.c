#include "holberton.h"

/**
 * _isupper - checks for uppercase character
 *
 * @c : initial Character
 *
 * Return: 1 if uppercase else 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
