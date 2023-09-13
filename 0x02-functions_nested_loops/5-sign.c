#include "main.h"

/**
 * print_sign - entry point
 * @n: int to check
 * Return: prints + if n > 0
 * prints 0 if n = 0, prints - if n < 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('-');
		return(-1);
	}
}
