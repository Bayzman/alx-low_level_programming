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
	unsigned int concat_len;
	unsigned int i, j;

	concat_len = n;
	i = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (j = 0; s2[j]; j++)
		concat_len++;

	if (n >= sizeof(s2))
		concat = malloc(sizeof(char) * (concat_len + 2));

	else
		concat = malloc(concat_len + 1);

	if (concat == NULL)
		return (NULL);

	for (j = 0; s1[j]; j++)
		concat[i++] = s1[j];

	for (j = 0; s2[j] && j < n; j++)
		concat[i++] = s2[j];

	concat[i] = '\0';

	return (concat);
}
