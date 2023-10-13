#include "variadic_functions.h"

/**
 * print_strings - print strings followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *arg;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		arg = va_arg(ap, char *);
		if (arg == NULL)
			printf("(nil)");

		else
			printf("%s", arg);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);

	}

	printf("\n");
	va_end(ap);
}
