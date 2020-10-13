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

	if (s == NULL)
		return (0);

	while (*(s + i) != '\0')
		i++;

	return (i);
}




/**
 * argstostr - concatenates all the arguments
 *
 * @ac : arguments count
 * @av : arguments
 *
 * Return: string
 */

char *argstostr(int ac, char **av)
{
	int i, j;
	char *s;
	int len;
	int count;

	if (ac == 0 || av == NULL)
		return (NULL);

	len = 0;
	for (i = 0; i < ac; i++)
		len += _strlen(av[i]) + 1;

	len++;

	s = malloc(len * sizeof(char));

	if (s == NULL)
		return (NULL);

	count = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < _strlen(av[i]); j++)
		{
			s[count] = av[i][j];
			count++;
		}
		s[count] = '\n';
		count++;
	}
	s[count] = '\0';

	return (s);
}
