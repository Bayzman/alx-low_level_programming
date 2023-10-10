#include "main.h"
#include <stdlib.h>

/**
 * array_range - create array of integers
 * @min: smallest number
 * @max: biggest number
 * Return: int
 */

int *array_range(int min, int max)
{
	int *mem;
	int i;
	int j;

	j = 0;
	if (min > max)
		return (NULL);

	mem = malloc(sizeof(*mem) * ((max - min) + 1));

	if (mem != NULL)
	{
		for (i = min; i <= max; i++)
		{
			mem[j] = i;
			j++;
		}
		return (mem);
	}
	else
		return (NULL);
}
