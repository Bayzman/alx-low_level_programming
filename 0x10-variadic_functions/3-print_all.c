#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: char (c), integer (i), float (f), char * (s)
 * Return: void
 */
void print_all(const char * const format, ...)
{
	char *str, *sep = "";
	int i = 0;
	va_list ap;

	va_start(ap, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(ap, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(ap, int));
				break;
			case 'f':
				printf("%s%f", sep,
				       va_arg(ap, double));
				break;
			case 's':
				str = va_arg(ap, char *);
				printf("%s%s", sep, str ? str : "(nil)");
				break;
			default:
				i++;
				continue;
			}
		sep = ", ";
		i++;
	}
	printf("\n");
	va_end(ap);
}
