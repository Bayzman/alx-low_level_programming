#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenate 2 strings
 * @s1: string 1
 * @s2: string 2
 * @n: first n bytes of s2
 * Return: char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int i, j;

	i = n;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (j = 0; s2[j]; j++)
		i++;

	if (n >= sizeof(s2))
		concat = malloc(sizeof(char) * (i + 1));

	else
		concat = malloc(sizeof(s1) + n);

	if (concat == NULL)
		return (NULL);

	i = 0;

	for (j = 0; s1[j]; j++)
	{
		concat[i++] = s1[j];
	}

	for (j = 0; s2[j] && j < n; j++)
		concat[i++] = s2[j];

	concat[i] = '\0';

	return (concat);
}
