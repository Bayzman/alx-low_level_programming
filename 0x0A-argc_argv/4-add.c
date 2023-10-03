#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - adds positive numbers
 * @argc: count of argument
 * @argv: 1D vector of arguments
 * Return: int
 */

int main(int argc, char *argv[])
{
	int i, j;
	int temp;
	int count;

	count = 0;
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		temp = atoi(argv[i]);
		count += temp;
	}

	printf("%d\n", count);

	return (0);
}
