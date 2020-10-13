#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

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
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 *
 * @str : duplicated string
 *
 * Return: created array
 */

char *_strdup(char *str)
{
	char *s;
	int i;
	int strsize;

	if (str == NULL)
		return (NULL);

	strsize = _strlen(str);
	s = malloc((strsize + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < strsize + 1; i++)
		s[i] = str[i];
	return (s);
}
