#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 *
 * @ht: created hash table
 * @key: key can not be an empty string
 * @value:  value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	hash_node_t *prev;
	int index;

	if (key == NULL || strlen(key) == 0)
		return (0);
	if (ht == NULL || value == NULL)
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
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = prev;
	ht->array[index] = new;
	return (1);
}
