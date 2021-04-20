#include "search_algos.h"

/**
 * jump_list - searches for a value using the Jump search algorithm
 * in a sorted list of integers
 *
 * @list : pointer to the head of the list to search in
 * @size: number of nodes in list
 * @value: value to search for
 *
 * Return:  pointer to the first node where value is located, else NULL
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t i = 0, k;
	size_t step;
	listint_t *head, *tail;

	if (list == NULL || size <= 0)
		return (NULL);

	step = (size_t)sqrt(size);
	head = list;

	while (i < size)
	{
		tail = head;
		for (k = 0; k < step; k++)
		{
			if (tail->next != NULL)
				tail = tail->next;
		}
		printf("Value checked at index[%lu] = [%i]\n", tail->index, tail->n);
		if ((i + step) >= size || tail->n > value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n",
			       head->index, tail->index);
			break;
		}
		i += step;
		head = tail;
	}
	i = 0;
	while (head && i < step && head->n <= value)
	{
		printf("Value checked array[%lu] = [%i]\n", head->index, head->n);
		if (head->n == value)
			return (head);
		head = head->next;
		i++;
	}
	if (head)
		printf("Value checked array[%lu] = [%i]\n", head->index, head->n);
	return (NULL);
}
