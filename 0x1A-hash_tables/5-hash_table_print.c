#include "hash_tables.h"

/**
 * hash_table_print - rints a hash table.
 *
 * @ht: created hash table
 *
 * Return: Void(always)
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *prev;
	unsigned int i;
	int first = 1;


	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		prev = (ht->array)[i];
		while (prev != NULL)
		{
			if (first == 0)
				printf(", ");
			printf("'%s': '%s'", prev->key, prev->value);
			first = 0;
			prev = prev->next;
		}
	}
	printf("}\n");

}
