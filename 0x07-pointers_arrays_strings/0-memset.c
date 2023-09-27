#include "main.h"

/**
 * _memset - fill memory with a constant byte
 * @s: char array
 * @n: bytes of the memory area pointed to by s
 * @b: constant byte
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		s[i] = b;
		n--;
		i++;
	}
	return (s);
}
