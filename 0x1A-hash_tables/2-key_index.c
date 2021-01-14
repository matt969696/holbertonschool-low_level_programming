#include "hash_tables.h"

/**
 * key_index - function that gives the index of a key
 *
 * @key : key string
 * @size: size of the array of the hash table
 *
 * Return: hash code
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}
