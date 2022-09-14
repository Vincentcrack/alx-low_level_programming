#include <stdio.h>
/**
 * main - function
 * Description: print first 100 fibonacci numbers
 * Return: 0
 */
int main(void)
{
	int i = 0;
	unsigned long int a = 0, b = 1, x = 0;

	while (i < 98)
	{
		x = a + b;
		a = b;
		b = x;
		printf("%lu", x);

		if (i < 97)
			printf(", ");
		i++;
	}
	putchar('\n');
	return (0);
}
