#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer char
 * Return:0
 */
int _strlen_recursion(char *s)
{
	int c;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		c = _strlen_recursion(s + 1);
	}
	return (c + 1);
}
