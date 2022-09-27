#include "main.h"
/**
 * _puts - prints a string with a new line
 * @x: pointer to a string
 * REturn: 0
 */
void _puts(char *x)
{
	int a = 0;

	while (x[a])
	{
		_putchar(x[a]);
		a++;
	}
	_putchar('\n');
}
