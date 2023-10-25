#include "lists.h"

/**
 * sum_listint - sum of all the data of a linked list
 * @head: pointer to head
 * Return: sum of all the data (int)
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
