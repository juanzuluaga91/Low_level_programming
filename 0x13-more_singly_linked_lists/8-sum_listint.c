#include "lists.h"

/**
 * sum_listint - returns the sum of all the data
 * @head: pointer to the first node in the list
 *
 * Return: sum of all the data
 */
int sum_listint(listint_t *head)
{
	int suma = 0;

	while (head != NULL)
	{
		suma += head->n;
		head = head->next;
	}
	return (suma);
}
