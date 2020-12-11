#include "lists.h"


/**
 * delete_dnodeint_at_index - deletes the node at index index
 * of a dlistint_t linked list.
 *
 * @head : current head of the list
 * @index : index to delete
 *
 * Return: 1 if succeeded, -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *old, *nextadr;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		old = *head;
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(old);
		return (1);
	}
	i = 1;
	nextadr = *head;
	while (nextadr)
	{
		if (i == index)
		{
			old = nextadr->next;
			if (old == NULL)
				return (-1);
			if (old->next)
				old->next->prev = nextadr;
			nextadr->next = old->next;
			free(old);
			return (1);
		}
		nextadr = nextadr->next;
		i++;
	}
	return (-1);

}
