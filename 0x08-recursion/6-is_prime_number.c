#include "holberton.h"


/**
 * prime_dich - check if number is prime by dichotomy
 *
 * @n : number to be squared root
 * @div : lowest possible divisor
 *
 * Return: 1 if prime, else 0
 */

int prime_dich(int n, int div)
{
	if (div * div > n)
		return (1);
	if (n % div == 0)
		return (0);
	return (prime_dich(n, div + 2));
}



/**
 * is_prime_number - check if integer is prime
 *
 * @n : integer checked
 *
 * Return: 1 if prime, else 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n <= 3)
		return (1);
	if (n % 2 == 0)
		return (0);
	return (prime_dich(n, 3));
}
