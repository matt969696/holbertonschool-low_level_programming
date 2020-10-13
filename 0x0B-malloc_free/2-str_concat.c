#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlennull - returns the length of a string
 *
 * @s : string
 *
 * Return: len of the String
 */

int _strlennull(char *s)
{
	int i = 0;

	if (s == NULL)
		return (0);

	while (*(s + i) != '\0')
		i++;

	return (i);
}


/**
 * str_concat - concatenates two strings
 *
 * @s1 : first string
 * @s2 : second string
 *
 * Return: concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int i;
	int strsize1, strsize2;

	strsize1 = _strlennull(s1);
	strsize2 = _strlennull(s2);

	s = malloc((strsize1 + strsize2 + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < strsize1; i++)
		s[i] = s1[i];
	for (i = 0; i < strsize2; i++)
		s[i + strsize1] = s2[i];
	s[strsize1 + strsize2] = '\0';
	return (s);
}
