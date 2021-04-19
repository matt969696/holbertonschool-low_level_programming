#include "search_algos.h"

/**
 * jump_search - searches for a value using the Jump search algorithm
 *
 * @array : pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return:  the first index where value is located, else -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t step, from, to;

	if (array == NULL || size <= 0)
		return (-1);

	step = (size_t)sqrt(size);

	while (i < size)
	{
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);
		if ((i + step) >= size || array[i + step] >= value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n", i, i + step);
			from = i;
			to = i + step;
			break;
		}
		i += step;
	}

	i = from;
	while (i < size && i <= to)
	{
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}

	return (-1);
}
