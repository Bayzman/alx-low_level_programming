#include "main.h"

/**
 * leet - encode a string into 1337
 * @str: char array
 * Return: encoded char array
 */

char *leet(char *str)
{
	int i;
	int j;
	char *l;
	char *d;

	l = "aAeEoOtTlL";
	d = "4433007711";

	for (i = 0; *(str + i) != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (*(str + i) == *(l + j))
			{
				*(str + i) = *(d + j);
			}
		}
	}

	return (str);
}
