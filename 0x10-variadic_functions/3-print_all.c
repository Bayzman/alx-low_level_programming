#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: char (c), integer (i), float (f), char * (s)
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i;
	char *str, *sep = "";
	va_list ap;

	va_start(ap, format);
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] == 'c')
			printf("%s%c", sep, va_arg(ap, int));
		else if (format[i] == 'i')
			printf("%s%d", sep, va_arg(ap, int));
		else if (format[i] == 'f')
			printf("%s%f", sep, va_arg(ap, double));
		else if (format[i] == 's')
		{
			str = va_arg(ap, char *);
			if (!str)
				str = "(nil)";
			printf("%s%s", sep, str);
		}
		else
			continue;
		sep = ", ";
	}
	printf("\n");
	va_end(ap);
}
