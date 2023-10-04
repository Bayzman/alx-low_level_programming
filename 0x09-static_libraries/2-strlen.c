#include "main.h"

/**
 * _strlen - return length of a string
 * @*s: pointer to a string
 * Return: integer
 */

int _strlen(char *s)
{
	int n;

	for (n = 0; s[n] != '\0'; n++)
		continue;

	return (n);
}
