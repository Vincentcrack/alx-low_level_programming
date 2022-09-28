#include "main.h"
/**
 * _strchr - a fuction
 * @s: a pointer
 * @c: the char tp
 * Description: returns the first
 * Return: a pointer
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != 0)
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	if (c == 0)
		return (s + i);
	return (0);
}
