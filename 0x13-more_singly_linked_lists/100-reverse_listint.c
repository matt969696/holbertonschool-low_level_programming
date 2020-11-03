#include "lists.h"


/**
 * reverse_listint - reverses a listint_t linked list
 *
 * @head : current head of the list
 *
 * Return: pointer to first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *before;
	listint_t *after;

	if (*head == NULL)
		return (NULL);

	before = NULL;

	while (*head)
	{
		after = (*head)->next;
		(*head)->next = before;
		before = *head;
		*head = after;
	}
	*head = before;
	return (before);

}
