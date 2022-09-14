#include "main.h"
/**
 * print_alphabet_x10 - function
 *
 * Description: prints alphabets x10
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int x, az;

	for (x = 0; x < 10; x++)
	{
		for (az = 'a'; az <= 'z'; az++)
		{
			_putchar(az);
		}
		_putchar('\n');
	}
}
