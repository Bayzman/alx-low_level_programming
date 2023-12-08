#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t list
 * @head: pointer to head of a dlistint_t list
 * @index: node index to return
 * Return: node at given index or NULL if node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i;

	tmp = head;
	for (i = 0; tmp && i < index; tmp = tmp->next, i++)
		;

	return (tmp);
}
