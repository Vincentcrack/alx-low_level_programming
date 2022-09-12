#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: print out numbers from base 10 using only putchar
 *
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar((x % 10) + '0');

	}
	putchar('\n');
	return (0);
}
