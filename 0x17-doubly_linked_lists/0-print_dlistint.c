#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: pointer to dlistint_t
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp;
	size_t count = 0;

	tmp = h;
	while (tmp && tmp->prev)
		tmp = tmp->prev;

	while (tmp)
	{
		printf("%d\n", tmp->n);
		count++;
		tmp = tmp->next;
	}

	return (count);
}
