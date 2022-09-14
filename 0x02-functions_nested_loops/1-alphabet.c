#include "main.h"
/**
 * print_alphabet - void function
 *
 * Description: print alphabets in lowwer case
 *
 * Return: 0
 */
void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
