#include <stdio.h>

/**
 * main - entry point
 * Return: return value
 */

int main(void)
{
	int i;
	char hexa;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (hexa = 'a'; hexa <= 'f'; hexa++)
	{
		putchar(hexa);
	}
	putchar('\n');

	return (0);
}
