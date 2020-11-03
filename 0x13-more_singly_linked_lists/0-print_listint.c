#include "lists.h"

/**
 * print_listint -  prints all the elements of a listint_t lists
 *
 * @h : list to print
 *
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
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
