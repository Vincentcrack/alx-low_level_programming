#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: print combination of two two digit
 *
 * Return: 0
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 98; num1++)
	{
		for (num2 = num1 + 1; num2++;)
		{
			putchar((num1 / 10) + '0');
			putchar((num1 % 10) + '0');
			putchar(' ');
			putchar((num 2 / 10) + '0');
			putchar((num 2 % 10) + '0');

			if (num1 == 98 && num2 == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
