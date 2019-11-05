#include "lists.h"
/**
 * insert_nodeint_at_index - function to insert node at nth location
 * @head: pointer to head of struct listint_t type
 * @idx: unsigned int for location to add node
 * @n: int type for value of new node
 * Return: always successful
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node = NULL, *c = NULL;
	unsigned int x = 0;

	if (head == NULL)
		return (NULL);
	node = malloc(sizeof(listint_t));
	if (node ==  NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	c = *head;
	if (c == NULL)
	{
		*head = node;
		node->next = NULL;
		return (node);
	}
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	while (x != (idx - 1))
	{
		c = c->next;
		x++;
		if (c == NULL)
		{
			free(node);
			return (NULL);
		}
	}
	node->next = c->next;
	c->next = node;
	return (node);
}
