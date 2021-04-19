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
 * binary_search - searches for a value using the Binary search algorithm
 *
 * @array : pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return:  the first index where value is located, else -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t from = 0;
	size_t to = size - 1;
	size_t mid;

	if (array == NULL || size == 0)
		return (-1);

	while (from <= to)
	{
		print_subarray(array, from, to);
		mid = (from + to) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			to = mid - 1;
		else if (array[mid] < value)
			from = mid + 1;
	}
	return (-1);
}
