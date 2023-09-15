#include "main.h"

/**
 * more_numbers - print 0 to 14 ten times
 * Return: void
 */

void more_numbers(void)
{
	int i;
	int c;

	i = 0;
	for (i = 0; i < 10; i++)
	{
		c = 0;
		while (c < 15)
		{
			if (c > 9)
				_putchar(1 + '0');
			_putchar(c % 10 + '0');
			c++;
		}
		_putchar('\n');
	}
}
