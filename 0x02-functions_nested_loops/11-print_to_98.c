#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - is the function
 * Description: print to 98
 * @n: int to begin with
 * Return: 0 or 1
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%i, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%i, ", n);
		n--;
	}
	printf("98");
	putchar('\n');
}
