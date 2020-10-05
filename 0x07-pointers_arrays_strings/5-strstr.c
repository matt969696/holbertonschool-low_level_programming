#include "holberton.h"
#include <stdio.h>

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
 * *_strstr - locates a substring
 *
 * @haystack : string where to search
 * @needle : string to find
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 *
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int lenh = _strlen(haystack);
	unsigned int lenn = _strlen(needle);
	unsigned int i = 0;
	unsigned int j;
	int isfound = 0;

	while (isfound == 0 && i < lenh - lenn + 1)
	{
		j = 0;
		isfound = 1;
		while (isfound == 1 && j < lenn)
		{
			if (*(haystack + i + j) != *(needle + j))
				isfound = 0;
			j++;
		}
		if (isfound == 1)
			return ((haystack + i));
		i++;
	}

	return (0);
}
