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
 * string_nconcat - concatenates two strings
 *
 * @s1 : first string
 * @s2 : second string
 * @n : max number of char from n2 to include
 *
 * Return: pointer to new string, NULL if fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i;
	unsigned int strsize1, strsize2, finalsize;

	strsize1 = _strlennull(s1);
	strsize2 = _strlennull(s2);

	if (n < strsize2)
		finalsize = strsize1 + n + 1;
	else
		finalsize = strsize1 + strsize2 + 1;

	s = malloc(finalsize * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < strsize1; i++)
		s[i] = s1[i];
	for (i = 0; i < finalsize - strsize1 - 1; i++)
		s[i + strsize1] = s2[i];
	s[finalsize - 1] = '\0';
	return (s);
}
