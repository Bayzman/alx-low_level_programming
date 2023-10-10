#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - frees dogs
 * @d: dog_t dog
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
		free(d);
}
