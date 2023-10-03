#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - print the minimum number of coins to make change
 * for an amount of money
 * @argc: count of argument
 * @argv: 1D vector of argument
 * Return: int
 */

int main(int argc, char *argv[])
{
	int i;
	int temp;
	int count;
	int coin[5] = {25, 10, 5, 2, 1};

	count = 0;
	if (argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	temp = atoi(argv[1]);
	if (temp < 0)
		printf("%d", 0);
	while (temp > 1)
	{
		for (i = 0; i < 5; i++)
		{
			if (temp >= coin[i])
			{
				count += temp / coin[i];
				temp = temp % coin[i];
			}
		}
	}

	printf("%d\n", count);

	return (0);
}
