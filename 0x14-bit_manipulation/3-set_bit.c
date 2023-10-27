#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to int to modify
 * @index: index of value to modify
 * Return: int
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int pow;

	if (index > 64)
		return (-1);

	for (pow = 1; index > 0; index--, pow *= 2)
		continue;

	*n += pow;

	return (1);
}
