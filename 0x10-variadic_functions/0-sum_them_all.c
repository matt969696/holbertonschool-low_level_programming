#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>


/**
 * sum_them_all - sum of all its parameters
 *
 * @n : number of parameters
 *
 * Return: Sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list myargs;

	if (n == 0)
		return (0);

	va_start(myargs, n);

	for (i = 0; i < n ; i++)
		sum += va_arg(myargs, int);

	va_end(myargs);

	return (sum);
}
