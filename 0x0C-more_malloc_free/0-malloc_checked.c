#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory using malloc
 * @b: int
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *i;
	int *err;

	err = (int *) 98;

	i = malloc(sizeof(b));
	if (i == NULL)
		return err;

	return (i);
}
