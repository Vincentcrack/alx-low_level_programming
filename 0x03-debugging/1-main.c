#include <stdio.h>
/**
 * main - causes an infinite loop
 * Description: stops the infinite lopp
 * Return: 0
 */
int main(void)
{
	int i;

	printf("infinite loop incoming :(\n");

	i = 0;

	/* don't delete it! while (i > 10)*/
	{
		putchar(i);
	}

	printf("infinite loop avoided! \\o/\n");

	return (0);
}
