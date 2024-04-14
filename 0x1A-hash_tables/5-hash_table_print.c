#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: pointer to the hash table
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	int kv;

	if (ht == NULL)
		return;

	printf("{");

	for (i = 0, kv = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		if (node == NULL)
			continue;
		if (kv == 1)
			printf(", ");
		while (node)
		{
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
		}
		kv = 1;
	}
	printf("}\n");
}
