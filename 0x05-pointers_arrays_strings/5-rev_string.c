#include "main.h"

/**
 * rev_string - reverse a string
 * @s: point to a char array
 * Return: void
 */

void rev_string(char *s)
{
	int i;
	int j;
	int k;
	char c;

	for (i = 0; s[i] != '\0'; i++)
		continue;

	k = i;
	for (i--, j = 0; j < k / 2; i--, j++)
	{
		c = s[j];
		s[j] = s[i];
		s[i] = c;
	}
}
