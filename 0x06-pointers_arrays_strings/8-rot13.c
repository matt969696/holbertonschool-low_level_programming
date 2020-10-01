#include "holberton.h"

/**
 * replace - replace char a by rot13 transformation
 *
 * @a : replaced char
 *
 * Return: modified character if present in init[]
 * else original character
 *
 */

char replace(char a)
{
	char init[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char final[53] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	int i = 0;

	while (i <= 52)
	{
		if (init[i] == a)
			return (final[i]);
		i++;
	}
	return (a);
}




/**
 * *rot13 - encodes a string using rot13
 *
 * @s : input string
 *
 * Return: modified string
 *
 */

char *rot13(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		s[i] = replace(s[i]);
		i++;
	}
	return (s);
}
