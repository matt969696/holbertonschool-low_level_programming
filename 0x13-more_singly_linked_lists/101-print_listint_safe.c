#include "lists.h"



/**
 * _dist - distance between 2 nodes
 *
 * @n1 : first node
 * @n2 : second node
 *
 * Return: Number of nodes
 */

int _dist(const listint_t *n1, const listint_t *n2)
{
	int i = 0;

	while (n1 != n2)
	{
		i++;
		n1 = n1->next;
	}

	return (i);
}





/**
 * print_listint_safe -  prints all the elements of a listint_t lists
 *
 * @h : list to print
 *
 * Return: Number of nodes
 */

size_t print_listint_safe(const listint_t *h)
{
	int i;
	const listint_t *start;

	start = h;

	if (h == NULL)
		return (98);
	i = 0;
	while (h && _dist(start, h) == i)
	{
		i++;
		printf("[%p] %i\n", (void *)(h), h->n);
		h = h->next;
	}

	if (h != NULL)
		printf("-> [%p] %i\n", (void *)(h), h->n);
	return (i);
}
