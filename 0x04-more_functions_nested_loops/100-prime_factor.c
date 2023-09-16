#include <stdio.h>
#include <math.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int factor;
	long num = 612852475143;

	for (factor = (int) sqrt(num); factor > 2; factor++)
	{
		if (num % factor == 0)
		{
			printf("%d\n", factor);
			break;
		}
	}

	return (0);
}
