#include <stdio.h>

/**
 * main - entry point
 * return - return value
 */
int main()
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

	return 0;
}
