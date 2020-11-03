#include "lists.h"


/**
 * delete_nodeint_at_index - deletes the node at index index
 * of a listint_t linked list.
 *
 * @head : current head of the list
 * @index : index to delete
 *
 * Return: 1 if succeeded, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *old;
	listint_t *nextadr;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		old = *head;
		*head = (*head)->next;
		if (old)
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
				nextadr->next = NULL;
			else
				nextadr->next = old->next;

			if (old)
				free(old);
			return (1);
		}
		nextadr = nextadr->next;
		i++;
	}

	return (-1);

}
