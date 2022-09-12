#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: printing out alphabets backwardly
 *
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}
	putchar("\n");
	return (0);
}
