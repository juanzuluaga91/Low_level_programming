#include "lists.h"
/**
 * pop_listint - function to remove node from start
 * @head: pointer to head node
 * Return: always successful
 */
int pop_listint(listint_t **head)
{
	listint_t *start = NULL;
	int x = 0;

	if (*head == NULL)
	{
		return (0);
	}
	start = *head;
	x = start->n;
	*head = start->next;
	free(start);
	return (x);
}
