#include "holberton.h"


/**
 * sqrt_dich - computes the square root by dichotomy
 *
 * @n : number to be squared root
 * @low : lower test
 *
 * Return: square root of n or -1
 */

int sqrt_dich(int n, int low)
{
	if (low * low == n)
		return (low);
	if (low * low > n)
		return (-1);
	return (sqrt_dich(n, low + 1));
}


/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n : number to be squared root
 *
 * Return: square root of n or -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_dich(n, 0));
}
