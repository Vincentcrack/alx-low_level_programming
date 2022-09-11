#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: print out alphabets
 *
 * Return: 0
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
