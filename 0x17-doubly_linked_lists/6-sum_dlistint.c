#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data of a dlistint_t list
 * @head: pointer to the head of a dlistint_t list
 * Return: sum of all the data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *tmp;

	tmp = head;
	for (sum = 0; tmp; tmp = tmp->next)
		sum += tmp->n;

	return (sum);
}
