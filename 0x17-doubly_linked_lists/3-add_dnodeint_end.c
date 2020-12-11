#include "lists.h"

/**
 * add_dnodeint_end -  adds a new node at the end of a listint_t list
 *
 * @head : current head of the list
 * @n : integer to add
 *
 * Return: Address of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

	dlistint_t *new;
	dlistint_t *nextadr;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (*head);
	}

	nextadr = *head;
	while (nextadr->next != NULL)
		nextadr = nextadr->next;

	nextadr->next = new;
	new->prev = nextadr;

	return (new);
}
