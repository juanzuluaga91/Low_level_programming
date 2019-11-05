#include "lists.h"

/**
 * get_nodeint_at_index - returns data for node in listint_t, by specific index
 *
 * @head: head for listint_t struct
 * @index: index of specified node
 * Return: returns data from specified node, or NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;
	listint_t *step;

	step = head;
	x = 0;
	while (x != index)
	{
		if (step->next == NULL)
			return (NULL);
		step = step->next;
		x++;
	}
	return (step);
}
