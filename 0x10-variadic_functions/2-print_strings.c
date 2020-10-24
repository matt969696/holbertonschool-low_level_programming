#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>


/**
 * print_strings - prints strings, followed by a new line
 *
 * @separator : separation string
 * @n : number of stringss to print
 *
 * Return: Void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list myargs;
	char *str;

	va_start(myargs, n);

	for (i = 0; i < n ; i++)
	{
		if (i != 0 && separator != NULL)
			printf("%s", separator);
		str = va_arg(myargs, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
	}

	printf("\n");
	va_end(myargs);
}
