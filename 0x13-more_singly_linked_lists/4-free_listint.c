#include "lists.h"

/**
 * free_listint - frees memory allocated for a listint_t structure
 *
 * @head: head for listint_t struct
 */
void free_listint(listint_t *head)
{
	listint_t *t;

	t = head;
	while (head != NULL)
	{
		t = head;
		head = head->next;
		free(t);
	}
}
