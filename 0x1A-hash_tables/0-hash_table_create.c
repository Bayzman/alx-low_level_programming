#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned int i;

	if (size <= 0)
		return (NULL);

	ht = malloc(sizeof(hash_table_t));

	if (!ht)
		return (NULL);

	ht->array = malloc(sizeof(hash_node_t *) * size);

	if (!ht->array)
	{
		free(ht);
		return (NULL);
	}

	ht->size = size;

	for (i = 0; i < size; i++)
	{
		ht->array[i] = NULL;
	}

	return (ht);
}
