#include <stdio.h>
#include "main.h"

/**
 * main - program that prints its name, followed by a new line
 * @argc - count of command line arguments
 * @argv - 1-dimensional argument vector of char
 * Return: int
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);

	return (0);
}
