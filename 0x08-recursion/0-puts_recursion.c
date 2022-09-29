#include "main.h"
/**
 * _puts_recursion - will print string
 * _putchar - print a string
 * @s: char to check
 * Return: 0
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}
