#include "holberton.h"
/**
 * reverse_array - reverse an array of integers
 *
 * @a : array to be reversed
 * @n : length of the array
 *
 * Return: Void
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int val;

	while (i <= (n -1) / 2)
	{
		val = *(a + i);
		*(a + i) = *(a + n - 1 - i);
		*(a + n - 1 - i) = val;
		i++;
	}

}
