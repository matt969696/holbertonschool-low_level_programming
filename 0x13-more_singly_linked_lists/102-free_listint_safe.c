#include "lists.h"



/**
 * _dist2 - distance between 2 nodes
 *
 * @n1 : first node
 * @n2 : second node
 *
 * Return: Number of nodes
 */

int _dist2(const listint_t *n1, const listint_t *n2)
{
	int i = 0;

	if (n1 == NULL || n2 == NULL)
		return (-1);

	while (n1 != n2)
	{
		i++;
		n1 = n1->next;
	}
	return (i);
}





/**
 * free_listint_safe -  free safely a listint_t list
 *
 * @h : list to print
 *
 * Return: Number of nodes
 */

size_t free_listint_safe(listint_t **h)
{
	int i, k;
	listint_t *start;
	listint_t *hnext;

	start = *h;

	if (*h == NULL)
		return (0);

	i = 0;
	while (*h && _dist2(start, *h) == i)
	{
		i++;
		hnext = (*h)->next;
		*h = hnext;
	}

	*h = start;
	for (k = 0; k < i; k++)
	{
		hnext = (*h)->next;
		free(*h);
		*h = hnext;
	}

	if (*h != NULL)
		*h = NULL;

	return (i);
}
