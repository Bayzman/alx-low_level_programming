#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of chars
 * and initialize it with a specific char
 * @size: unsigned int
 * @c: char
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	a = malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);
}
