#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 *
 * @size : size of the array
 *
 * Return: pointer to the newly created hash table, NULL if problem
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	hash_node_t **newarr;

	if (size == 0)
		return (NULL);

	ht = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->size = size;
	newarr = calloc(size, sizeof(hash_node_t *));
	if (newarr == NULL)
	{
		free(ht);
		return (NULL);
	}
	ht->array = newarr;
	return (ht);
}
