#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to the head of a dlistint_t list
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	dlistint_t *store;

	if (head == NULL)
		return;

	tmp = head;
	while (tmp->prev)
		tmp = tmp->prev;
	while (tmp)
	{
		store = tmp;
		tmp = tmp->next;
		free(store);
	}
}
