#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers
 *
 * @list : pointer to the head of the list to search in
 * @value: value to search for
 *
 * Return:  pointer to the first node where value is located, else NULL
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *head, *tail;

	if (list == NULL)
		return (NULL);
	head = list;

	while (1)
	{
		if (head->express != NULL)
		{
			tail = head->express;
			printf("Value checked at index [%lu] = [%i]\n", tail->index, tail->n);
		}
		else
		{
			tail = head;
			while (tail->next)
				tail = tail->next;
		}
		if (tail->next == NULL || tail->n >= value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n",
			       head->index, tail->index);
			break;
		}
		head = tail;
	}
	while (head)
	{
		printf("Value checked at index [%lu] = [%i]\n", head->index, head->n);
		if (head->n == value)
			return (head);
		head = head->next;
	}

	return (head);
}
