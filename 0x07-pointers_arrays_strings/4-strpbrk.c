#include "main.h"

/**
 * _strpbrk - locate characters in string
 * @s: string to be scanned
 * @accept: string containing the characters to match
 * Return: pointer to the first occurrence of s
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;
	char *p;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
			j++;
		}
		i++;
	}

	return (0);
}
