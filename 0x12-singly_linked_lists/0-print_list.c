#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: constant list_t
 * Return: size_t (unsigned int)
 */

size_t print_list(const list_t *h)
{
	size_t num_nodes;
	num_nodes = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}

		else
		{
			printf("[0] (nil)\n");
		}

		h = h->next;
		num_nodes++;
	}

	return (num_nodes);
}
