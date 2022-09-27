#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generate random passwords for 101-crackme
 * Return: 0
 */
int main(void)
{
	int x;
	char c;

	srand(time(NULL));
	while (x <= 5657)
	{
		c = rand() % 128;
		x += c;
		putchar(c);
	}
	putchar(2772 - x);
	return (0);
}
