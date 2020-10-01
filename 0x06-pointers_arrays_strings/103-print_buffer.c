#include "holberton.h"
#include <stdio.h>

/**
 * print_line - prints a line of the buffer in correct format
 *
 * @b : buffer to be printed
 * @size : size of *b
 * @nb : numero of the line to be printed
 *
 * Return: Void
 */


void print_line(char *b, int size, int nb)
{
	int i;

	printf("%08x: ", nb * 10);
	for (i = 0; i < 10; i++)
	{
		if (nb * 10 + i > size - 1)
			printf("  ");
		else
			printf("%02x", b[nb * 10 + i]);

		if (i % 2 == 1)
			printf(" ");
	}

	for (i = 0; i < 10; i++)
	{
		if (nb * 10 + i > size - 1)
			printf(" ");
		else if (b[nb * 10 + i] < 32)
			printf(".");
		else
			printf("%c", b[nb * 10 + i]);
	}

	printf("\n");

}



/**
 * print_buffer - prints a buffer in readable format
 *
 * @b : buffer to be printed
 * @size : size of *b
 *
 * Return: Void
 */


void print_buffer(char *b, int size)
{
	int i;

	if (size <= 0)
		printf("\n");
	else
	{
		for (i = 0; i <= size / 10; i++)
			print_line(b, size, i);
	}
}
