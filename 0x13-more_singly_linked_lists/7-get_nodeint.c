#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of the linked list
 * @head: pointer to the head
 * @index: index of nth node
 * Return: nth node of a linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int i;

	node = malloc(sizeof(listint_t));
	node = head;

	for (i = 0; i < index; i++)
	{
		node = (node)->next;
	}

	if (!node)
		return (NULL);

	else
		return (node);

}
