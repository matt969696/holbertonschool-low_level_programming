#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 *
 * @ht: created hash table
 *
 * Return: Void(always)
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *prev, *next;
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
