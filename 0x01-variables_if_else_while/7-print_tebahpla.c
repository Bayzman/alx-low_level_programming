#include <stdio.h>

/**
 * main - entry point
 * return - return value
 */

int main()
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}
	putchar('\n');

	return 0;
}
