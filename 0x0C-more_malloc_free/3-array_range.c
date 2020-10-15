#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 *
 * @min : min value
 * @max : max value
 *
 * Return: pointer to created arry
 */

int *array_range(int min, int max)
{
	int i;
	int *s;

	if (min > max)
		return (NULL);

	s = malloc((max - min + 1) * sizeof(int));
	if (s == NULL)
		return (NULL);

	for (i = 0; i <= max - min; i++)
		s[i] = i - min;

	return (s);
}
