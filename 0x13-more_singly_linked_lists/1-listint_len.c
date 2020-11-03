#include "lists.h"

/**
 * listint_len -  returns the number of elements in a linked listint_t list
 *
 * @h : list to print
 *
 * Return: Number of elements
 */

size_t listint_len(const listint_t *h)
{
	int i;

	i = 0;
	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}
