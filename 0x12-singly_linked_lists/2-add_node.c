#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the head of list_t
 * @str: element to add to the beginning of list_t (should be duplicated)
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (len = 0; str[len] != '\0'; len++)
	{
		continue;
	}

	new_node->str = strdup(str);
	new_node->next = (*head);
	new_node->len = len;
	(*head) = new_node;

	return (new_node);
}
