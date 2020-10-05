#include "holberton.h"

/**
 * *_strchr - locates a character in a string
 *
 * @s : string where to search
 * @c : character to find
 *
 * Return: pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not foundpointer to dest
 *
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (*(s + i))
	{
		if (*(s + i) == c)
			return((s + i));
		i++;
	}

	if (*(s + i) == c)
		return((s + i));

	return (0);
}
