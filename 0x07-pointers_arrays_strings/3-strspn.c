#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s : string where to search
 * @accept : acceptable prefix bytes
 *
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j;
	int isfound = 1;

	while (*(s + i) && isfound == 1)
	{
		j = 0;
		isfound = 0;
		while (*(accept + j) && isfound == 0)
		{
			if (*(s + i) == *(accept + j))
				isfound = 1;
			j++;
		}

		if (isfound == 1)
			i++;
	}
	return (i);

}
