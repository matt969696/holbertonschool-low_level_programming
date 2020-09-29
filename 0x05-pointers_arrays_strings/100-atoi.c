#include "holberton.h"
#include <stdio.h>

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
 * _atoi - Equivalent to atoi function
 *
 * @s : input string
 *
 * Return: atoi number
 */

int _atoi(char *s)
{
	int sign = 1;
	int res = 0;
	int i, len;

	i = 0;
	len = _strlen(s);

	while (i < len)
	{
		if (res == 0)
		{
			if (*(s + i) == '-')
				sign = -sign;
		}

		if (*(s + i) >= '0' && *(s + i) <= '9')
			res = 10 * res + sign * (*(s + i) - '0');
		else if (res != 0)
			break;
		i++;
	}
	return (res);
}
