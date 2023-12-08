#include "lists.h"

/**
 * dlistint_len - returns the number of elements in dlistint_t list
 * @h: pointer to dlistint_t
 * Return: number of elements in dlistint_t
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp;
	size_t count = 0;

	tmp = h;
	while (tmp && tmp->prev)
		tmp = tmp->prev;

	while (tmp)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}
