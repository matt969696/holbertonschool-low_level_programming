#include "hash_tables.h"

/**
 * shash_table_create - creates a shash table
 *
 * @size : size of the array
 *
 * Return: pointer to the newly created shash table, NULL if problem
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	shash_node_t **newarr;

	if (size == 0)
		return (NULL);

	ht = (shash_table_t *)malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->size = size;
	newarr = calloc(size, sizeof(shash_node_t *));
	if (newarr == NULL)
	{
		free(ht);
		return (NULL);
	}
	ht->array = newarr;
	ht->shead = NULL;
	ht->stail = NULL;
	return (ht);
}




/**
 * shash_table_set - adds an element to the shash table
 *
 * @ht: created hash table
 * @key: key can not be an empty string
 * @value:  value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new, *prev;
	int index;

	if (key == NULL || strlen(key) == 0 || ht == NULL || value == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	prev = ht->array[index];
	while (prev != NULL)
	{
		if (strcmp(prev->key, key) == 0)
		{
			free(prev->value);
			prev->value = strdup(value);
			return (1);
		}
		prev = prev->next;
	}

	prev = ht->array[index];
	new = malloc(sizeof(shash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = prev;
	ht->array[index] = new;
	insert_in_list(ht, new);
	return (1);
}



/**
 * insert_in_list - adds an element to a double linked list
 *
 * @ht: created hash table
 * @new: node to add
 *
 * Return: Void
 */

void insert_in_list(shash_table_t *ht, shash_node_t *new)
{
	shash_node_t *head, *tmp;

	head = ht->shead;
	if (head == NULL)
	{
		new->sprev = NULL;
		new->snext = NULL;
		ht->shead = new;
		ht->stail = new;
	}
	else if (strcmp(new->key, head->key) <= 0)
	{
		new->snext = head;
		new->sprev = NULL;
		head->sprev = new;
		ht->shead = new;
	}
	else
	{
		while (head->snext != NULL && strcmp(new->key, head->snext->key) > 0)
			head = head->snext;
		new->snext = head->snext;
		new->sprev = head;
		tmp = head->snext;
		head->snext = new;
		if (tmp != NULL)
			tmp->sprev = new;
		else
			ht->stail = new;
	}
}



/**
 * shash_table_get - retrieves a value associated with a key.
 *
 * @ht: created shash table
 * @key: key can not be an empty string
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

char *shash_table_get(const shash_table_t *ht, const char *key)

{
	shash_node_t *prev;
	int index;

	if (key == NULL || strlen(key) == 0)
		return (NULL);
	if (ht == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	prev = (ht->array)[index];
	while (prev != NULL)
	{
		if (strcmp(prev->key, key) == 0)
			return (prev->value);
		prev = prev->next;
	}
	return (NULL);
}



/**
 * shash_table_print - rints a hash table.
 *
 * @ht: created hash table
 *
 * Return: Void(always)
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *head;
	int first = 1;

	if (ht == NULL)
		return;
	printf("{");

	head = ht->shead;
	while (head != NULL)
	{
		if (first == 0)
			printf(", ");
		printf("'%s': '%s'", head->key, head->value);
		first = 0;
		head = head->snext;
	}
	printf("}\n");
}



/**
 * shash_table_print_rev - rints a hash table in reverse.
 *
 * @ht: created hash table
 *
 * Return: Void(always)
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tail;
	int first = 1;

	if (ht == NULL)
		return;
	printf("{");

	tail = ht->stail;
	while (tail != NULL)
	{
		if (first == 0)
			printf(", ");
		printf("'%s': '%s'", tail->key, tail->value);
		first = 0;
		tail = tail->sprev;
	}
	printf("}\n");
}



/**
 * shash_table_delete - deletes a shash table.
 *
 * @ht: created hash table
 *
 * Return: Void(always)
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *prev, *next;
	unsigned int i;

	for (i = 0; i < ht->size; i++)
	{
		prev = (ht->array)[i];
		while (prev != NULL)
		{
			next = prev->next;
			free(prev->key);
			free(prev->value);
			free(prev);
			prev = next;
		}
	}
	free(ht->array);
	free(ht);
}
