#include "function_pointers.h"

/**
 * array_iterator - execute function on each element of
 * an arry
 *
 * @array : array to use
 * @size : number of elements of the array
 * @action : action to execute
 *
 * Return: Void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);

}
