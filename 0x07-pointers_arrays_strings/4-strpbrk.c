#include "holberton.h"
#include <stdio.h>

/**
 * *_strpbrk - searches a string for any of a set of bytes
 *
 * @s : string where to search
 * @accept : acceptable prefix bytes
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 *
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j;

	while (*(s + i))
	{
		j = 0;
		while (*(accept + j))
		{
			if (*(s + i) == *(accept + j))
				return ((s + i));
			j++;
		}

		i++;
	}

	return (0);
}
