#include "hash_tables.h"

/**
 * new_node - For create a new node.
 * @key: the key as a string
 * @value: the value as string
 *
 * Return: the node or NULL
 */
hash_node_t *new_node(const char *key, const char *value)
{
	hash_node_t *node;

	node = calloc(1, sizeof(hash_node_t));
	if (!node)
		return (0);

	node->key = strdup(key);
	if (!node->key)
	{
		free(node);
		return (0);
	}
	node->value = strdup(value);
	if (!node->value)
	{
		free(node->key);
		free(node);
		return (0);
	}

	return (node);
}


/**
 * hash_table_set - adds a new element to the hash table
 * @ht: pointer to hash table
 * @key: the key as a string
 * @value: the value as string
 *
 * Return: 1 on success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node = NULL, *head;
	unsigned long int idx;

	if (!ht || !key || !*key || !value)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	head = ht->array[idx];
	while (head)
	{
		if (!strcmp(key, head->key))
		{
			char *_value = strdup(value);

			if (!_value)
				return (0);
			free(head->value);
			head->value = _value;
			return (1);
		}
		head = head->next;
	}
	node = new_node(key, value);
	if (!node)
		return (0);
	node->next = ht->array[idx];
	ht->array[idx] = node;
	return (1);
}
