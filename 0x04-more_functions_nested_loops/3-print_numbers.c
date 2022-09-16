#include "main.h"
/**
 * main - check the code
 * Return: 0
 */
void print_number(void)
{
	char a = 0;

	while (a <= 9)
	{
		_putchar(a + '0');
		a++;
	}
	_putchar('\n');
}
