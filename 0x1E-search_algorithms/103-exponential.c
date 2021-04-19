#include "search_algos.h"




/**
 * print_subarray2 - prints a sub_array
 *
 * @array : pointer to the first element of the array to search in
 * @from: index from
 * @to: index to
 *
 * Return: Void
 */

void print_subarray2(int *array, size_t from, size_t to)
{
	size_t i;

	printf("Searching in array: %i", array[from]);
	for (i = from + 1; i <= to; i++)
		printf(", %i", array[i]);
	printf("\n");
}




/**
 * binary_search2 - searches for a value using the Binary search algorithm
 *
 * @array : pointer to the first element of the array to search in
 * @f: array from
 * @t: array to
 * @value: value to search for
 *
 * Return:  the first index where value is located, else -1
 */

int binary_search2(int *array, size_t f, size_t t, int value)
{
	size_t from = f;
	size_t to = t;
	size_t mid;

	if (array == NULL || t < f)
		return (-1);

	while (from <= to)
	{
		print_subarray2(array, from, to);
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





/**
 * exponential_search - searches for a value using the exp search algorithm
 *
 * @array : pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return:  the first index where value is located, else -1
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1;
	size_t from, to;

	if (array == NULL || size <= 0)
		return (-1);

	while (i < size)
	{
		if (array[i] >= value)
			break;
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);
		i *= 2;
	}

	from = i / 2;
	if (i >= size)
		to = size - 1;
	else
		to = i;
	printf("Value found between indexes [%lu] and [%lu]\n", from, to);
	return (binary_search2(array, from, to, value));

}
