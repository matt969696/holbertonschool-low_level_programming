#include "lists.h"

/**
 * print_dlistint -  prints all the elements of a dlistint_t lists
 *
 * @h : list to print
 *
 * Return: Number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i;

	i = 0;
	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
