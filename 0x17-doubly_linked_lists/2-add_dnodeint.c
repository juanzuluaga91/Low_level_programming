#include "lists.h"

/**
 * add_dnodeint - function to add node at the head of a doubly linked list
 * @head: double pointer of dlistint_t type to head of list
 * @n: int of const type for data inside list
 * Return: doubly linked list if successful or NULL if unsuccessful
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *nodo = malloc(sizeof(dlistint_t));


	if (nodo == NULL)
		return (NULL);
	nodo->n = n;
	nodo->prev = NULL;
	nodo->next = NULL;

	if (*head == NULL)
	{
		nodo->next = NULL;
		*head = nodo;
		return (*head);
	}
	tmp = *head;
	nodo->next = tmp;
	tmp->prev = nodo;
	*head = nodo;
	return (nodo);
}
