#include "lists.h"


/**
 * sum_dlistint - returns the sum of all the data (n)
 * of a dlistint_t linked list
 *
 * @head : current head of the list
 *
 * Return: sum of all the data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);

}
