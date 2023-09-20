#include "main.h"

/**
 * _strcat - concatenate 2 strings
 * @dest: pointer to a char array
 * @src: pointer to a char array
 * Return: char array of concatenated strings
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
