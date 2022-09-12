#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: printing int with commas
 *
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar((x % 9) + '0');
		if (x == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
