#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: print out all numbers from base 10
 *
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		printf("%d", x);
	}
	printf("\n");
	return (0);
}
