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
	unsigned int len1 = 0, len2 = 0, i = 0, j = 0;

	while (s1 && s1[len1])
		len1++;

	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		concat = malloc(sizeof(char) * (len1 + n + 1));

	else
		concat = malloc(sizeof(char) * (len1 + len2 + 1));

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	for (j = 0; j < n && j < (len1 + len2); j++)
		concat[i + j] = s2[j];

	concat[i + j] = '\0';

	return (concat);
}
