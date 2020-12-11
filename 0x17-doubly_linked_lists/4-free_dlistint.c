#include "lists.h"


/**
 * free_dlistint - frees a dlistint_t list
 *
 * @head : current head of the list
 *
 * Return: Void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *hnext;

	while (head != NULL)
	{
		hnext = head->next;
		free(head);
		head = hnext;
	}

}
