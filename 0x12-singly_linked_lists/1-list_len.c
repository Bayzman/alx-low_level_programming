#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: constant linked list
 * Return: number of elements in a linked list
 */

size_t list_len(const list_t *h)
{
	size_t num_elements;

	num_elements = 0;
	while (h != NULL)
	{
		if (h->str != NULL)
			num_elements++;

		h = h->next;
	}

	return (num_elements);
}
