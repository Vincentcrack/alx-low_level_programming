#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: print all the numbers from base16
 *
 * Return: 0
 */
int main(void)
{
	int x;
	char a;

	for (x = 0; x < 10; x++)
	{
		putchar(x);
	}
	for (a = 'a'; a <= 'f')
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
