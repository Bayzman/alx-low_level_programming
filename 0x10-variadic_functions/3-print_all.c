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
	char *arg;

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
					arg = va_arg(ap, int));
					printf("%s%c", separator, arg);
					break;
				case 'i':
					arg = va_arg(ap, int));
					printf("%s%d", separator, arg);
					break;
				case 'f':
					arg = va_arg(ap, int));
					printf("%s%f", separator, arg);
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
