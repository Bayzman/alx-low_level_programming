#include "hash_tables.h"

hash_node_t *key_val(string key, string value);

/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to the hash table
 * @key: key in the hash table
 * @value: value in the hash table
 * Return: 1 if succeeded or 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *node;
	hash_node_t *tmp;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	node = ht->array[idx];

	if (node == NULL)
	{
		ht->array[idx] = key_val(key, value);
		return (1);
	}

	while (node == NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			node->value = strdup(value);
			return (1);
		}
		tmp = node;
		node = tmp->next;
	}

	tmp = key_val(key, value);
	if (ht->array[idx] == NULL)
		tmp->next = ht->array[idx];
	ht->array[idx] = tmp;

	return (1);
}

/**
 * key_val - assign key and value
 * @key: key (str)
 * @value: value (str)
 * Return: pointer to node
 */

hash_node_t *key_val(string key, string value)
{
	hash_node_t *node = malloc(sizeof(hash_node_t));

	if (node == NULL)
		return (NULL);

	node->key = strdup(key);
	node->value = strdup(value);

	node->next = NULL;

	return (node);
}
