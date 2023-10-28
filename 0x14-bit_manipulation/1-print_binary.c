#include "main.h"

void print_binary_helper(unsigned long int n, int first);

/**
 * print_binary - prints the binary representation of a number
 * @n: int to be converted to binary
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n > 0)
	{
		print_binary(n >> 1);
		_putchar((n & 1) ? '1' : '0');
	}
}
