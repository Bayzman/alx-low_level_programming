#include "main.h"

/**
 * string_toupper - change all lowercase to uppercase
 * @str: char array
 * Return: char array of uppercase letters
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
		}
	}
	return (str);
}
