#include "main.h"

/**
 * _strlen_recursion - return string length
 * @s: char array
 * Return: int
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * _is_palindrome - check if the string is a palindrome
 * @s: char array
 * @i: int
 * @length: length of the string
 * Return: 1 if palindrome or 0 if not
 */

int _is_palindrome(char *s, int i, int length)
{
	if (*(s + i) != *(s + length - 1))
		return (0);
	if (i >= length)
		return (1);
	return (_is_palindrome(s, i + 1, length - 1));
}

/**
 * is_palindrome - check if a string is a palindrome
 * @s: char array
 * Return: 1  if the string is a palindrome or 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (_is_palindrome(s, 0, _strlen_recursion(s)));
}
