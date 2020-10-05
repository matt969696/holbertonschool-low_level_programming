#include "holberton.h"

/**
 * *_memset - fills memory with a constant byte
 *
 * @s : input pointer to char
 * @b : filling byte
 * @n : number of bytes
 *
 * Return: modified string
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
