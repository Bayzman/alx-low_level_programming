#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: first number
 * @m: second number
 * Return: unsigned int
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip;
	int num_bits;

	num_bits = 0;
	flip = n ^ m;

	while (flip)
	{
		num_bits++;
		flip = flip & (flip - 1);
	}

	return (num_bits);
}
