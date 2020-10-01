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
 * *_strncat - concatenates two strings using at most n bytes from src
 *
 * @dest : destination
 * @src : string source to be concatenated
 * @n : number of bytes from source
 *
 * Return: string concatenated
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, lendest, lensrc;

	lendest = _strlen(dest);
	lensrc = _strlen(src);

	for (i = 0; i <= lensrc && i < n; i++)
	{
		*(dest + i + lendest) = *(src + i);
	}
	*(dest + i + lendest) = '\0';

	return (dest);
}
