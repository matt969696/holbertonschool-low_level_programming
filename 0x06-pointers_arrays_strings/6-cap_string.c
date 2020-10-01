#include "holberton.h"
#include <stdio.h>

/**
 * is_sep - test if the character is a separator
 *
 * @c : input character
 *
 * Return: 1 if separator else 0
 *
 */

int is_sep(char c)
{
	if (c == ' ' || c == ',' || c == ';' || c == '.' || c == '!' || c == '?')
		return (1);
	else if (c == '"' || c == '(' || c == ')' || c == '{' || c == '}')
		return (1);
	else if (c == '\n' || c == '\t')
		return (1);
	else
		return (0);
}



/**
 * *cap_string - capitalizes all words of a string
 *
 * @s : input string
 *
 * Return: modified string
 *
 */

char *cap_string(char *s)
{
	int i = 0;
	int capnext = 1;
	int nextchar;

	while (*(s + i))
	{
		nextchar = 1;
		if (is_sep(s[i]) == 1)
			capnext = 1;
		else if (capnext == 1)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
			}
			capnext = 0;
		}
		else
			capnext = 0;
		i += nextchar;
	}

	return (s);
}
