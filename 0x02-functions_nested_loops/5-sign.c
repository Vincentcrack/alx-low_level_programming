#include "main.h"
/**
 * print_sign - functions
 * @n: checking num
 * Description: print sign and num
 * Return: 0 or 1
 */
int print_sign(int n)
{
	int x;

	if (n > 0)
	{
		x = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		x = 0;
		_putchar('0');

	}
	else
	{
		x = -1;
		_putchar('-');
	}
	return (x);
}
