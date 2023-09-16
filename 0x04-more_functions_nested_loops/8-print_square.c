#include "main.h"

/**
 * print_square - print square using #
 * @size: integer
 * Return: void
 */

void print_square(int size)
{
	int i;
	int j;

	i = 0;

	if (size < 1)
		_putchar('\n');

	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
