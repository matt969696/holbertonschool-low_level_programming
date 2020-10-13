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
 * nbword - count number of words
 *
 * @s : string to be counted
 *
 * Return: number of words
 */

int nbword(char *s)
{
	int i = 1;
	int nbw = 0;

	if (s == NULL)
		return (0);

	if (*s != ' ')
		nbw++;

	while (*(s + i) != '\0')
	{
		if (*(s + i - 1) == ' ' && *(s + i) != ' ')
			nbw++;
		i++;
	}

	return (nbw);
}




/**
 * mydup - duplicate a string
 *
 * @str : string to be copied
 * @size : size of string
 *
 * Return: string
 */

char *mydup(char *str, int size)
{
	char *s;
	int i;

	if (str == NULL)
		return (NULL);

	s = malloc((size + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = str[i];
	s[i] = '\0';
	return (s);
}


/**
 * strtow - splits a string into words
 *
 * @str : string to be splitted
 *
 * Return: string
 */

char **strtow(char *str)
{
	int i = 0, nbw, inword = 0, sizeword = 0, curw = -1;
	char **s;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	nbw = nbword(str);
	if (nbw == 0)
		return (NULL);
	s = malloc((nbw + 1) * sizeof(char *));
	if (s == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && inword == 0)
		{
			inword = 1;
			sizeword = 1;
			curw += 1;
		}
		else if (str[i] == ' ' && inword == 1)
		{
			inword = 0;
			s[curw] = mydup(str + i - sizeword, sizeword);
			sizeword = 0;
		}
		else if (str[i] != ' ' && inword == 1)
			sizeword += 1;
		i++;
	}
	if (inword == 1)
	{
		s[curw] = mydup(str + i - sizeword, sizeword);
	}
	s[curw + 1] = NULL;
	return (s);
}
