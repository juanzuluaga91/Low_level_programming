#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: pointer to the "just created" hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int x;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->size = size;
	ht->array = malloc(size * sizeof(hash_node_t *));
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	for (x = 0; x < size; x++)
		ht->array[x] = NULL;
	return (ht);
}
