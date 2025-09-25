#include "main.h"

/**
 * _strcpy - copies the string pointed to by src,\
 * including the terminating null byte (\0), to the buffer pointed to by dest
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int len;

	for (len = 0; src[len] != '\0'; len++)
		continue;

	/* include null character */
	len += 1;

	for (i = 0; i <= len; i++)
		{
			dest[i] = src[i];
		}

	return (dest);
}
