#include "lists.h"




/**
 * add_nodeint_end -  adds a new node at the end of a listint_t list
 *
 * @head : current head of the list
 * @n : integer to add
 *
 * Return: Address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *new;
	listint_t *nextadr;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	nextadr = *head;
	while (nextadr->next != NULL)
		nextadr = nextadr->next;

	nextadr->next = new;

	return (new);
}
