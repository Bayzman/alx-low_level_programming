#include <stdio.h>

/**
 * main - entry point
 * Return: return value
 * 48-58 is the ASCII equivalent of 0-9
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
