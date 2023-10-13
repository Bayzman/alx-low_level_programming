#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: char (c), integer (i), float (f), char * (s)
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i;
	char *str;
	char *separator;

	va_list ap;

	i = 0;
	separator = "";

	va_start(ap, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator,
					       va_arg(ap, int));
					break;
				case 'i':
					printf("%s%d", separator,
					       va_arg(ap, int));
					break;
				case 'f':
					printf("%s%f", separator,
					       va_arg(ap, double));
					break;
				case 's':
					str = va_arg(ap, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", separator, str);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(ap);
}
