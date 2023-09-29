#include "main.h"

/**
 * factorial - print the factorial of an integer n
 * @n: integer value
 * Return: integer
 */

int factorial(int n)
{
	int result = 0;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	result = n * factorial(n - 1);

	return (result);
}
