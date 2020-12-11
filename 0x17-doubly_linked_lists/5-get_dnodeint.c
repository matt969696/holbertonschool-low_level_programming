#include "lists.h"


/**
 * dlistint_len -  returns the number of elements in a linked dlistint_t list
 *
 * @h : list to print
 *
 * Return: Number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i;

	i = 0;
	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}




/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 *
 * @head : current head of the list
 * @index : index of the node to return
 *
 * Return: nth nodes data
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i, len;
	dlistint_t *hnext;

	hnext = head;

	if (head == NULL)
		return (NULL);

	len = dlistint_len(hnext);

	if (index >= len)
		return (NULL);

	for (i = 0; i < index; i++)
		hnext = hnext->next;

	return (hnext);

}
