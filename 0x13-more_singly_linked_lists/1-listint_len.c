#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: pointer to a linked list
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}

	return (nodes);
}
