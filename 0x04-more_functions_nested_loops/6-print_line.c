#include "main.h"

/**
 * print_line - print lines n times using _
 * @n: integer
 * Return: void
 */

void print_line(int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
