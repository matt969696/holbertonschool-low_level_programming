#include "holberton.h"

/**
 * _isalpha - returns 1 if character is a letter, 0 otherwise
 *
 * @c: int variable
 *
 * Return: 1
 **/

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}
