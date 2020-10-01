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
 * rev_string - reverse the beginning of a string
 *
 * @s : string to be reversed
 * @len : number of characters at the beginning
 *
 * Return: Void
 */

void rev_string(char *s, int len)
{
	int i = 0;
	char letter;
	int length;

	length = len - 1;

	while (i <= length / 2)
	{
		letter = *(s + i);
		*(s + i) = *(s + length - i);
		*(s + length - i) = letter;
		i++;
	}
}


/**
 * *infinite_add - adds two numbers
 *
 * @n1 : first number
 * @n2 : second number
 * @r : buffer to store the result
 * @size_r : size of the buffer r
 *
 * Return: sum if not result non exceeding size_r else 0
 **/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int ret = 0;
	int size1, size2;
	int d1, d2, d;
	int i, j;

	size1 = _strlen(n1);
	size2 = _strlen(n2);
	if (size1 >= size_r || size2 >= size_r)
		return (0);
	for (i = 0; i < size1 || i < size2; i++)
	{
		if (i >= size1)
			d1 = 0;
		else
			d1 = n1[size1 - 1 - i] - '0';
		if (i >= size2)
			d2 = 0;
		else
			d2 = n2[size2 - 1 - i] - '0';
		d = (d1 + d2 + ret) % 10;
		ret = (d1 + d2 + ret) / 10;
		r[i] = d + '0';
	}
	if (ret == 1)
	{
		if (i < size_r - 1)
		{
			r[i] = '1';
			i += 1;
		}
		else
			return (0);
	}
	for (j = i + 1; j <= size_r; j++)
		r[i] = 0;
	rev_string(r, i);
	return (r);
}
