#include "lists.h"

/**
 * print_list -  prints all the elements of a list_t lists
 *
 * @h : list to print
 *
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
	int i;

	i = 0;
	while (h)
	{
		i++;
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}

	return (i);
}
