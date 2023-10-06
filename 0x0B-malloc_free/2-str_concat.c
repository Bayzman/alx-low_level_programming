#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenate 2 strings using malloc to allocate memory
 * @s1: string
 * @s2: string
 * Return: char
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	int k;
	int l;
	int length;
	char *a;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		continue;

	for (j = 0; s2[j] != '\0'; j++)
		continue;

	a = malloc((i * sizeof(char)) + (j * sizeof(char)) + 1);
	if (a == NULL)
		return (NULL);

	length = i + j + 1;

	for (k = 0, l = 0; k < length; k++)
	{
		if (k < i)
			a[k] = s1[k];
		else
			a[k] = s2[l++];
	}

	return (a);
}
