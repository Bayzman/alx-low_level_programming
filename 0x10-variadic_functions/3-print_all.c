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
	char *sep;

	va_list ap;

	i = 0;
	sep = "";

	va_start(ap, format);

	if (format)
	{
		while (format[i])
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
					arg = va_arg(ap, int));
					printf("%s%f", sep, va_arg(ap, int));
					break;
				case 's':
					str = va_arg(ap, char *);
					if (!str)
						str = "(nil)";
					else
						printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(ap);
}
