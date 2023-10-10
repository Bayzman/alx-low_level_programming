#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory for an array using malloc
 * @nmemb: array
 * @size: memory size to be allocated
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem = malloc(nmemb * size);

	if (mem != NULL)
	{
		for (i = 0; i < sizeof(mem); i++)
			mem[i] = 0;
		return (mem);
	}
	else
		return (NULL);
}
