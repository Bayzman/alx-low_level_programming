#include "main.h"
#include <stdlib.h>

/**
 * _strstr - locate a substring
 * @haystack: string to be scanned
 * @needle: string containing the sequence of characters to match
 * Return: pointer to the first occurrence of needle in haystack
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int k;

	i = 0;
	k = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j + k] != '\0' && haystack[i + k] != '\0'
		       && needle[j + k] == haystack[i + k])
		{
			if (haystack[i + k] != needle[j + k])
				break;
			k++;
		}
		if (needle[j + k] == '\0')
			return (&haystack[i]);
		j++;
		i++;
	}

	return (NULL);
}
