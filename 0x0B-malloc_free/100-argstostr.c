#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to the concatenated new string
 */

char *argstostr(int ac, char **av)
{
	int i, j, count, pos;
	char *str;

	count = 0;
	pos = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			count++;
		count++;
	}

	str = malloc((count + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			str[pos++] = av[i][j];
		str[pos++] = '\n';
	}
	str[pos] = '\0';

	return (str);
}
