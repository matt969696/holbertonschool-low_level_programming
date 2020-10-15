#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 *
 * @nmemb : number of elements
 * @size : size per element
 *
 * Return: pointer to allocated memory, NULL if fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *s;

	if (nmemb == 0 || size == 0)
		return (NULL);

	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size ; i++)
		*((char *)s + i) = 0;

	return (s);
}
