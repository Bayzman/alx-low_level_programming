#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: char array
 * @c: character to be located in s
 * Return: pointer to the first occurrence of c in s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		s++;
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
	}

	return (s + 1);
}
