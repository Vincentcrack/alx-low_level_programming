#include "main.h"
/**
 * times_table - the function
 * Description: prints time table
 * Return: void
 */
void times_table(void)
{
	int x = 0;
	int z;
	int c;

	while (x <= 9)
	{
		z = 0;
		while (z <= 9)
		{
			c = x * z;
			if (z == 0)
			{
				_putchar('0' + c);
			}
			else if (c < 10)
			{
				_putchar(' ');
				_putchar('0' + c);
			}
			else
			{
				_putchar('0' + c / 10);
				_putchar('0' + c % 10);
			}
			if (z < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			b++;
		}
		_putchar('\n');
		x++;
	}
}
