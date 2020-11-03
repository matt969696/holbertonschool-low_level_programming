#include "lists.h"


/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head : current head of the list
 * @idx : index where to insert
 * @n : value to insert
 *
 * Return: address of the new node, NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *nextadr;

	if (idx == 0)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}

	i = 1;

	nextadr = *head;
	while (nextadr)
	{
		if (i == idx)
		{
			new = malloc(sizeof(listint_t));
			if (new == NULL)
				return (NULL);
			new->n = n;
			new->next = nextadr->next;
			nextadr->next = new;
			return (new);
		}
		nextadr = nextadr->next;
		i++;
	}

	return (NULL);

}
