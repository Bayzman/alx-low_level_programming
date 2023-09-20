#include "main.h"

/**
 * _strncat - concatenate 2 strings using at most n bytes from src
 * @dest: pointer to char array
 * @src: pointer to char array
 * @n: number of bytes
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len;
	int i;

	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
	{
		continue;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';

	return (dest);
}
