#include "lists.h"



/**
 * free_listint - frees a listint_t list
 *
 * @head : current head of the list
 *
 * Return: Void
 */

void free_listint(listint_t *head)
{
	listint_t *hnext;

	while (head != NULL)
	{
		hnext = head->next;
		free(head);
		head = hnext;
	}

}
