#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 *
 * @ht: created hash table
 * @key: key can not be an empty string
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *prev;
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
