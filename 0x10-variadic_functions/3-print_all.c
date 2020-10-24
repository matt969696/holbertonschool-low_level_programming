#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>



/**
 * print_all - prints anything
 *
 * @format : string containing the format of the following arguments
 *
 * Return: Void
 */

void print_all(const char * const format, ...)
{
	va_list myargs;
	int i = 0;
	char *str, *sep = "";

	va_start(myargs, format);
	while (format && format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%s", sep);
			printf("%c", va_arg(myargs, int));
			sep = ", ";
			break;
		case 'i':
			printf("%s", sep);
			printf("%i", va_arg(myargs, int));
			sep = ", ";
			break;
		case 'f':
			printf("%s", sep);
			printf("%f", va_arg(myargs, double));
			sep = ", ";
			break;
		case 's':
			printf("%s", sep);
			str = va_arg(myargs, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s", str);
			sep = ", ";
			break;
		}
		i++;
	}
	va_end(myargs);
	printf("\n");
}
