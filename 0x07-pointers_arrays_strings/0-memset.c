#include "main.h"
/**
 * _memset - fills memory with constant
 * @s: char to check
 * @b: char to check
 * @n: unsigned int
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
