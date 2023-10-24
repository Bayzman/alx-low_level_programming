#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to the head
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *node;

	while (*head != NULL)
	{
		node = (*head)->next;
		free(*head);
		*head = node;
	}

	*head = NULL;
}
