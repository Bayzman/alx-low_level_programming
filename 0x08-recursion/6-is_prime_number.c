#include "main.h"

/**
 * check_prime - helper function to check if n is prime or not
 * @n: int
 * @i: int divisor
 * Return: int
 */

int check_prime(int n, int i)
{
	if (i == 1)
		return (1);
	else if (n % i == 0 && i > 0)
		return (0);
	else
		return (check_prime(n, i - 1));
}

/**
 * is_prime_number - print 1 if n is prime or 0 is not
 * @n: int
 * Return: int
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, n - 1));
}
