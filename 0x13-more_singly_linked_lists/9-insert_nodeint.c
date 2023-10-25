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
	listint_t *temp2;
	unsigned int i;
	unsigned int num_nodes;

	num_nodes = 0;
	temp = (*head);
	temp2 = (*head);
	node = malloc(sizeof(listint_t));
	node->n = n;
	node->next = NULL;

	while (temp != NULL)
	{
		temp = temp->next;
		num_nodes++;
	}

	if (num_nodes >= idx)
	{
		for (i = 0; i < (idx - 1); i++)
		{
			temp2 = temp2->next;
		}

		node->next = temp2->next;
		temp2->next = node;
	}

	else if (num_nodes < idx || *head == NULL)
		return (NULL);

	return (node);
}
