#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: char array (string)
 * Return: pointer to the encoded string
 */

char *rot13(char *s)
{
	int i, j;

	char alphabets[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rotate13[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; alphabets[j] != '\0'; j++)
		{
			if (s[i] == alphabets[j])
			{
				s[i] = rotate13[j];
				break;
			}
		}
	}

	return (s);
}
