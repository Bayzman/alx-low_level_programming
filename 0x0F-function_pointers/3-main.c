#include "3-calc.h"
#include <stdio.h>

/**
 * main - entry point
 * @argc - argument count
 * @argv - array of argument
 * Return: int
 */

int main(int argc, char *argv[])
{
	int a;
	int b;
	int (*fun)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	fun = get_op_func(argv[2]);
	if (fun == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", fun(a, b));

	return (0);
}
