#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer to the hash table
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node;
	hash_node_t *tmp;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			tmp = node;
			node = node->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	}

	free(ht->array);
	free(ht);
}
