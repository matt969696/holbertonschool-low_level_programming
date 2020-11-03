#include "lists.h"


/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 *
 * @head : current head of the list
 *
 * Return: sum of all the data
 */

int sum_listint(listint_t *head)
{
	int sum;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);

}
