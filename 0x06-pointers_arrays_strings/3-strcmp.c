#include "main.h"

/**
 * _strcmp - compare 2 strings
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 * Return: positive, negative, or zero integer
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[1] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		else
			return (0);
	}

	return (0);
}
