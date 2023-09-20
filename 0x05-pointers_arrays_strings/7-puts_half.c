#include "main.h"

/**
 * puts_half - print second half of any string
 * @str: char array
 * Return: void
 */

void puts_half(char *str)
{
	int i, length;

	for (i = 0; str[i] != '\0'; i++)
		continue;

	length = i;

	if (length % 2 != 0)
	{
		for (i = (length + 1) / 2; i < length; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}

	else
	{
		for (i = length / 2; i < length; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
}
