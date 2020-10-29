#include "lists.h"


/**
 * _strlen - returns the length of a string
 *
 * @s : string
 *
 * Return: len of the String
 */

int _strlen(const char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i++;

	return (i);
}




/**
 * add_node -  adds a new node at the beginning of a list_t list
 *
 * @head : current head of the list
 * @str : string to add
 *
 * Return: Number of elements
 */

list_t *add_node(list_t **head, const char *str)
{

	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);


	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;

	return (*head);
}
