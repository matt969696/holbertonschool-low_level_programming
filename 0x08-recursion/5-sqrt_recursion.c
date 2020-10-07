#include "holberton.h"


/**
 * sqrt_dich - computes the square root by dichotomy
 *
 * @n : number to be squared root
 * @low : lower test
 * @high : higher test
 *
 * Return: square root of n or -1
 */

int sqrt_dich(int n, int low, int high)
{
	if (low * low == n)
		return (low);
	if (high * high == n)
		return (high);
	if (high - low <= 1)
		return (-1);
	if (((low + high) / 2 * (low + high) / 2) == n)
		return ((low + high) / 2);
	if (((low + high) / 2 * (low + high) / 2) > n)
		return (sqrt_dich(n, low, (low + high) / 2));
	return (sqrt_dich(n, (low + high) / 2, high));
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
	return (sqrt_dich(n, 1, n / 2));
}
