#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string 0 and 1 chars
 * Return: converted number or 0
 * if there is one or more chars in the string b that is not
 * 0 or 1
 * or if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum;
	unsigned int pow;
	int i;

	sum = 0;
	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	for (i--, pow = 1; i >= 0; i--, pow *= 2)
	{
		if (b[i] == '1')
			sum += pow;
	}

	return (sum);
}
