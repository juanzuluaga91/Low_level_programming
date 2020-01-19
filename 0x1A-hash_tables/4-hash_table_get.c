#include "hash_tables.h"

/**
 *hash_table_get - Retrieves a value associated with a key.
 *@ht: hash table
 *@key: key of the hash table
 *Return: Value of the element in HT, or NULL if the key is not found.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *temp_node;

	if (ht == NULL || key == NULL)
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);
	temp_node = ht->array[idx];
	while (temp_node != NULL)
	{
		if (strcmp(temp_node->key, key) == 0)
			return (temp_node->value);
		temp_node = temp_node->next;
	}
	return (NULL);
}
