#include "search_algos.h"


/**
 * print_subarray - prints a sub_array
 *
 * @array : pointer to the first element of the array to search in
 * @from: index from
 * @to: index to
 *
 * Return: Void
 */

void print_subarray(int *array, size_t from, size_t to)
{
	size_t i;

	printf("Searching in array: %i", array[from]);
	for (i = from + 1; i <= to; i++)
		printf(", %i", array[i]);
	printf("\n");
}




/**
 * binary_search_rec - searches for a value using the Binary search algorithm
 *
 * @array : pointer to the first element of the array to search in
 * @f: number from in the array
 * @t: number to in the array
 * @value: value to search for
 *
 * Return:  the first index where value is located, else -1
 */

int binary_search_rec(int *array, size_t f, size_t t, int value)
{
	size_t m;

	if (f > t)
		return (-1);

	print_subarray(array, f, t);

	if (array[f] == value)
		return (f);
	if (f == t)
		return (-1);

	m = (f + t) / 2;
	if (array[m] == value && array[m - 1] != value)
		return (m);
	if (array[m] >= value)
		return (binary_search_rec(array, f, m, value));
	if (array[m] < value)
		return (binary_search_rec(array, m + 1, t, value));

	return (-1);
}

/**
 * advanced_binary - searches for a value using a rec Binary search algorithm
 *
 * @array : pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return:  the first index where value is located, else -1
 */

int advanced_binary(int *array, size_t size, int value)
{

	if (array == NULL || size == 0)
		return (-1);

	return (binary_search_rec(array, 0, size - 1, value));
}
