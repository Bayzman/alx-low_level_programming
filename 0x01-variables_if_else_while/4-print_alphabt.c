#include <stdio.h>

/**
 * main - entry point
 * Return: return value
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha != 'e' && alpha != 'q')
		{
			putchar(alpha);
		}
		alpha++;
	}

	putchar('\n');

	return (0);
}
