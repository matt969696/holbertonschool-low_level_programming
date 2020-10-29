#include "lists.h"



/**
 * free_list - frees a list_t list
 *
 * @head : current head of the list
 *
 * Return: Void
 */

void free_list(list_t *head)
{
	list_t *hnext;

	while (head != NULL)
	{
		hnext = head->next;
		free(head->str);
		free(head);
		head = hnext;
	}

}
