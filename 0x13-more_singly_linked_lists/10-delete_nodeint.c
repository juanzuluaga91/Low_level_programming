#include "lists.h"
/**
 * delete_nodeint_at_index - functioon to delete node at nth  position
 * @head: pointer to head
 * @index: point of node deletion
 * Return: Always successful
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *stmp;
	unsigned int c =  0;

	if (head  == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	while (c != (index - 1))
	{
		tmp = tmp->next;
		c++;
		if (tmp == NULL)
			return (-1);
	}
	stmp = tmp->next;
	tmp->next = stmp->next;
	free(stmp);
	return (1);
}
