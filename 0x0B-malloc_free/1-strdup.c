#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate a string using malloc to allocate memory
 * @str: string
 * Return: char
 */

char *_strdup(char *str)
{
	int i;
	int j;
	char *a;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	a = malloc(i * sizeof(char) + 1);

	if (a == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		a[j] = str[j];

	a[j] = '\0';

	return (a);
}
