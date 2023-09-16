#include "main.h"

/**
 * print_triangle - print triangle using #
 * @size: integer
 * Return: void
 */

void print_triangle(int size)
{
	int a;
	int b;
	int i;
	int j;
	int k;

	a = 0;
	b = size;

	for (i = 0; i < size; i++)
	{
		a += 1;
		b -= 1;

		for (j = b; j > 0; j--)
		{
			_putchar(' ');
		}

		for (k = 0; k < a; k++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}
