#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer to hash table
 *
 * Return: Nothing.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long x;
	hash_node_t *current, *temp_node;

	if (!ht)
		return;
	x = 0;
	for (x = 0; x < ht->size; x++)
	{
		current = ht->array[x];
		while (current)
		{
			temp_node = current;
			current = current->next;
			free(temp_node->key);
			free(temp_node->value);
			free(temp_node);
		}
	}
	free(ht->array);
	free(ht);
}
