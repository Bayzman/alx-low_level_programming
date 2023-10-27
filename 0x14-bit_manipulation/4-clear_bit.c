#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to n
 * @index: index of value of n to set to 0
 * Return: int
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int temp;

	if (index > 64)
		return (-1);

	temp = index;
	for (i = 1; temp > 0; i *= 2, temp--)
		continue;

	if ((*n >> index) & 1)
		*n -= i;

	return (1);
}
