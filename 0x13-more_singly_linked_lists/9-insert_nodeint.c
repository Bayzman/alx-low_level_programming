#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to head
 * @idx: index of where to add the new node (unsigned int)
 * @n: data to add to the new node (int)
 * Return: address to the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node;
	listint_t *temp;
	unsigned int i;

	temp = *head;
	node = malloc(sizeof(listint_t));
	node->n = n;
	node->next = NULL;

	for (i = 0; i < (idx - 1); i++)
	{
		temp = temp->next;
	}

	node->next = temp->next;
	temp->next = node;

	if (!node)
		return (NULL);

	return (node);
}
