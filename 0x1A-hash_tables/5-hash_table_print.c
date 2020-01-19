#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to print
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int x;
	hash_node_t *temp_node;
	char marker = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		temp_node = ht->array[x];
		while (temp_node != NULL)
		{
			if (marker == 1)
				printf(", ");
			printf("'%s': '%s'", temp_node->key, temp_node->value);
			marker = 1;
			temp_node = temp_node->next;
		}
	}
	printf("}\n");
}
