#include "main.h"

/**
 * wildcmp - compare 2 strings to see if they are identical
 * @s1: string 1
 * @s2: string 2
 * Return: 1 if they are identical or 0 if not
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0' && *s1 == '\0')
		return (1);

	else if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
		return (0);

	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	else if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));

	else
		return (0);
}
