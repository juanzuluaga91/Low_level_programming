#include "lists.h"
/**
 * free_listint2 - function to free heap memory used
 * @head: pointer to head of struct listint_t type
 * Return: always successful
 */
void free_listint2(listint_t **head)
{
	listint_t *t = NULL;
	listint_t *t_i = NULL;

	if (head == NULL)
		return;
	t = *head;
	while (t != NULL)
	{
		t_i = t;
		t = t->next;
		free(t_i);
	}
	*head = NULL;
}
