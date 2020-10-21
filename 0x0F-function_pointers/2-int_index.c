#include "function_pointers.h"

/**
 * int_index - search for an integer
 *
 * @array : array to be searched
 * @size : number of elements of the array
 * @cmp : function used to compare values
 *
 * Return: Void
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	int ret = -1;

	while (i < size && ret == -1)
	{
		if (cmp(array[i]) != 0)
			ret = i;
		i++;
	}

	return (ret);
}
