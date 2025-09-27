#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @s: char array
 * Return: array of capitalized words in a string
 */

char *cap_string(char *s)
{
	int i, j, sep_len;

	char *sep = ",;.!?(){}\n\t\" ";

	for (sep_len = 0; sep[sep_len] != 0; sep_len++)
		continue;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (i == 0 && *(s + i) >= 'a' && *(s + i) <= 'z')
			s[i] -= 32;

		for (j = 0; j < sep_len; j++)
		{
			if (s[i] == sep[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i + 1] -= 32;
			}
		}
	}

	return (s);
}
