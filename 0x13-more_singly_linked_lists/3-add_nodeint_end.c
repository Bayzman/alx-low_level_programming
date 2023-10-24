#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a linked list
 * @head: pointer to the head
 * @n: element to add
 * Return: address to the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *temp;

	temp = *head;
	ptr = malloc(sizeof(listint_t));
	ptr->n = n;
	ptr->next = NULL;

	if (ptr == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}

	while(temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = ptr;

	return (ptr);
}
