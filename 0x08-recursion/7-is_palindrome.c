#include "holberton.h"


/**
 * sizepal - compute the size of a string
 *
 * @s : string
 *
 * Return: size of string
 */

int sizepal(char *s)
{
	if (*s == 0)
		return (0);
	s++;
	return (1 + sizepal(s));
}


/**
 * pal_dich - check if word is palindrome
 *
 * @s : string checked
 * @size : size of the char
 * @n : char checked
 *
 * Return: 1 if palindrome, else 0
 */

int pal_dich(char *s, int size, int n)
{
	if (n >= size / 2)
		return (1);
	if (*(s + n) != *(s + size - n - 1))
		return (0);
	return (pal_dich(s, size, n + 1));

}


/**
 * is_palindrome - check if word is palindrome
 *
 * @s : char checked
 *
 * Return: 1 if palindrome, else 0
 */

int is_palindrome(char *s)
{
	int size;

	if (*s == 0)
		return (1);

	size = sizepal(s);
	return (pal_dich(s, size, 0));
}
