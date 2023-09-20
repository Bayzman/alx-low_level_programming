#include "main.h"

/**
 * rev_string - reverse a string
 * @s: point to a char array
 * Return: void
 */

void rev_string(char *s)
{
	int length;
	int i;
	int j;
	char temp;

	for (length = 0; s[length] != '\0'; length++)
		continue;

	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
