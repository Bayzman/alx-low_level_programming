#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to a listint_t
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h != NULL)
	{
		if (h->n != NULL)
		{
			printf("%d\n", h->n);
		}

		nodes++;
		h = h->next;
	}

	return (nodes);
}
