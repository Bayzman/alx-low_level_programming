#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 * @s: char array
 * @accept: char array
 * Return: number of bytes in s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int k;

	i = 0;
	k = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				k++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
			break;
		i++;
	}

	return (k);
}
