#include "lists.h"

/**
 * add_nodeint - add node to beginning of list
 *
 * @head: pointer to head of node
 * @n: given node data
 * Return: address of new element, or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
