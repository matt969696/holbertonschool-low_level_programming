#include "lists.h"



/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head nodes data (n)
 *
 * @head : current head of the list
 *
 * Return: head nodes data
 */

int pop_listint(listint_t **head)
{
	int i;
	listint_t *hnext;

	if (*head == NULL)
		return (0);

	i = (*head)->n;
	hnext = (*head)->next;
	free(*head);
	*head = hnext;

	return (i);

}
