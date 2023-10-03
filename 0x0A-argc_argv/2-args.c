#include <stdio.h>
#include "main.h"

/**
 * main - print all arguments including the first one ending with a new line
 * @argc: count of arguments
 * @argv: 1D vector of arguments
 * Return: int
 */

int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}

	return (0);
}
