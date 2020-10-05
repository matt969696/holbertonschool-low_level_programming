#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 *
 * @a : matrix of integer
 * @size : size of the matrix
 *
 * Return: Void
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	long int sum = 0;

	for (i = 0; i < size ; i++)
		sum += *(a + i * (size + 1));
	printf("%li, ", sum);

	sum = 0;
	for (i = 0; i < size ; i++)
		sum += *(a + (i + 1) * (size - 1));
	printf("%li\n", sum);
}
