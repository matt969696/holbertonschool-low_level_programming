#include "lists.h"


/**
 * listint_len -  returns the number of elements in a linked listint_t list
 *
 * @h : list to print
 *
 * Return: Number of elements
 */

size_t listint_len(const listint_t *h)
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
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 *
 * @head : current head of the list
 * @index : index of the node to return
 *
 * Return: nth nodes data
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i, len;
	listint_t *hnext;

	hnext = head;

	if (head == NULL)
		return (NULL);

	len = listint_len(hnext);

	if (index >= len)
		return (NULL);

	for (i = 0; i < index; i++)
		hnext = hnext->next;

	return (hnext);

}
