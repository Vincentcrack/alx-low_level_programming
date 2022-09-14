#include "main.h"
/**
 * print_last_digit - is the function
 * @n: is the int to check
 * Description: return the last int
 * Return: 0 or 1
 */
int print_last_digit(int n)
{
	int x;

	if (x < 0)
		x = -1 * (n % 10);

	else
		x = n % 10;

	_putchar(x + '0');
	return (x);
}
