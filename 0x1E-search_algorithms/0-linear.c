#include "search_algos.h"

/**
 * linear_search - searches for a value using the Linear search algorithm
 *
 * @array : pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return:  the first index where value is located, else -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL || size <= 0)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}

	return (-1);
}
