#include "search_algos.h"

/**
 * interpolation_search - searches for a value using the Intr search algorithm
 *
 * @array : pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return:  the first index where value is located, else -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t l = 0;
	size_t h = size - 1;
	long int m;

	if (array == NULL || size <= 0)
		return (-1);

	while (array[h] != array[l])
	{
		m = l + ((double)(h - l) / (array[h] - array[l])) * (value - array[l]);
		if (m < 0 || m > (long int)size)
		{
			printf("Value checked array[%li] is out of range\n", m);
			return (-1);
		}
		printf("Value checked array[%li] = [%i]\n", m, array[m]);
		if (array[m] == value)
			return (m);
		else if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			h = m - 1;
	}

	if (array[l] == value)
		return (l);
	return (-1);
}
