#include "lists.h"


/**
 * find_listint_loop -  finds the loop in a linked list.
 *
 * @head : list to search
 *
 * Return: Address of the node where the loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow_p;
	listint_t *fast_p;

	if (head == NULL || head->next == NULL)
		return (NULL);

	slow_p = head;
	fast_p = head;

	while (slow_p && fast_p && fast_p->next)
	{
		slow_p = slow_p->next;
		fast_p = fast_p->next->next;
			if (slow_p == fast_p)
				break;
	}

	if (slow_p != fast_p)
		return (NULL);

	slow_p = head;
	while (slow_p != fast_p)
	{
		slow_p = slow_p->next;
		fast_p = fast_p->next;
	}

	return (slow_p);
}
