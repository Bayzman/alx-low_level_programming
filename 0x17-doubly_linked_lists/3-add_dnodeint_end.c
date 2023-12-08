#include "lists.h"

/**
 * add_dnodeint_end - Add a new node at the end of a dlistint_t list
 * @head: double pointer to dlistint_t list
 * @n: new element to add to the new node
 * Return: Address of new element or NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	tmp = *head;
	while (tmp && tmp->next)
		tmp = tmp->next;

	if (tmp)
	{
		new->prev = tmp;
		tmp->next = new;
	}
	else
	{
		*head = new;
		new->prev = NULL;
	}

	return (new);
}
