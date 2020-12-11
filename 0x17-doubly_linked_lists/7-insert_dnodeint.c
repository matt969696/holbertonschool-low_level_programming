#include "lists.h"


/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 *
 * @h : current head of the list
 * @idx : index where to insert
 * @n : value to insert
 *
 * Return: address of the new node, NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new;
	dlistint_t *nextadr;

	if (idx == 0)
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = *h;
		new->prev = NULL;
		if (*h)
			(*h)->prev = new;
		*h = new;
		return (new);
	}
	i = 1;
	nextadr = *h;
	while (nextadr)
	{
		if (i == idx)
		{
			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
				return (NULL);
			new->n = n;
			new->next = nextadr->next;
			new->prev = nextadr;
			if (nextadr->next)
				nextadr->next->prev = new;
			nextadr->next = new;
			return (new);
		}
		nextadr = nextadr->next;
		i++;
	}
	return (NULL);
}
