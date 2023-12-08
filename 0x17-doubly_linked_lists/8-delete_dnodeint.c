#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at a given index in a list
 * @head: double pointer to the head of a dlistint_t list
 * @index: index of the node to be deleted
 * Return: 1 if succeeded, -1 if it failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	dlistint_t *prev;

	unsigned int count = 0;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	tmp = *head;

	if (index == 0)
	{
		*head = tmp->next;
		if (head != NULL)
			(*head)->prev = NULL;
		free(tmp);
		return (1);
	}

	while (tmp != NULL)
	{
		if (count == index)
		{
			prev->next = tmp->next;

			if (tmp->next != NULL)
				tmp->next->prev = prev;

			free(tmp);
			return (1);
		}

		prev = tmp, tmp = tmp->next, count++;
	}

	return (-1);
}
