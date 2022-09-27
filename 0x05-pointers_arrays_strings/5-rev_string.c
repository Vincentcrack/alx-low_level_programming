#include "main.h"
/**
 * rev_string - print a string in reverse
 * @s: the used string to be reversed
 * Return: 0
 */
void rev_string(char *s)
{
	int x, i, a;

	for (x = 0, s[x] != '\n'; x++)
	;
	i = 0;
	a = x / 2;

	while (a--)
	{
		c = s[x - i - 1];
		s[x - i - 1] = s[i];
		s[i] = temp;
		i++;
	}
}
