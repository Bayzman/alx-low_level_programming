#include "lists.h"

/**
 * insert_node - inserts node at given index
 * @tmp: pointer to nth position node in doubly linked list
 * @n: node data
 * Return: address of inserted node
 */

dlistint_t *insert_node(dlistint_t *tmp, int n)
{
	dlistint_t *new;

	new = malloc(sizeof(struct dlistint_s));
	if (new == NULL)
		return (NULL);

	new->n = n;

	new->next = tmp;
	new->prev = tmp->prev;
	tmp->prev->next = new;
	tmp->prev = new;

	return (new);
}

/**
 * insert_dnodeint_at_index - creates and insert node at nth index
 * @h: pointer to head of dlistint_t list
 * @idx: index
 * @n: node data
 * Return: address of inserted node, or NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp;

	if (idx == 0)
		return (add_dnodeint(h, n));

	if (h == NULL)
		return (NULL);

	tmp = *h;
	while ((idx != 0) && (tmp->next))
	{
		idx -= 1;
		tmp = tmp->next;
		if (idx == 0)
			return (insert_node(tmp, n));
	}

	if (idx == 1)
		return (add_dnodeint_end(h, n));

	return (NULL);
}
