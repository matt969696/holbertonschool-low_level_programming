#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>


/**
 * print_numbers - prints numbers, followed by a new line
 *
 * @separator : separation string
 * @n : number of integers to print
 *
 * Return: Void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list myargs;
	int nb;

	va_start(myargs, n);

	for (i = 0; i < n ; i++)
	{
		if (i != 0 && separator != NULL)
			printf("%s", separator);
		nb = va_arg(myargs, int);
		printf("%i", nb);
	}

	printf("\n");
	va_end(myargs);
}
