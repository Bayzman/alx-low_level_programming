#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into it
 * @argc: count of arguments
 * @argv: 1D argument vector
 * Return: int
 */

int main(int argc, char *argv[])
{
	(void) argv;

	if (argc > 1)
		printf("%d\n", argc - 1);
	else
		printf("%d\n", argc - 1);

	return (0);
}
