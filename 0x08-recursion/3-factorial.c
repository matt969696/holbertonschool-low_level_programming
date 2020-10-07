#include "holberton.h"

/**
 * factorial -  returns the factorial
 *
 * @n : integer input
 *
 * Return: factorial of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (n);
	return (n * factorial(n - 1));
}
