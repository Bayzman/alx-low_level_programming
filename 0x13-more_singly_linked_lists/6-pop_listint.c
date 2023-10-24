#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: pointer to the head
 * Return: int data store in the head node
 */

int pop_listint(listint_t **head)
{
	int pop;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	pop = temp->n;
	*head = (*head)->next;
	free(temp);

	return (pop);
}
