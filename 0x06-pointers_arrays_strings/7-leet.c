#include "holberton.h"

/**
 * *replace - replace char a and b by char c in string str
 *
 * @str : input string
 * @a : first char to be replaced
 * @b : second char to be replaced
 * @c : replacing char
 *
 * Return: modified string
 *
 */

char *replace(char *str, char a, char b, char c)
{
	int i = 0;

	while (*(str + i))
	{
		if (str[i] == a || str[i] == b)
			str[i] = c;
		i++;
	}
	return (str);
}




/**
 * *leet - replace some letters by some numbers
 *
 * @s : input string
 *
 * Return: modified string
 *
 */

char *leet(char *s)
{
	char a[6] = "aeotl";
	char b[6] = "AEOTL";
	char c[6] = "43071";
	int i;

	for (i = 0; i < 5; i++)
		s = replace(s, a[i], b[i], c[i]);
	return (s);
}
