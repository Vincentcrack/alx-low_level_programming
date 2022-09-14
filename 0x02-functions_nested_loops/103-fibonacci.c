#include <stdio.h>
/**
 * main - function
 * Description: compute and prints even numbers
 * 5 below 1024
 * Return: 0
 */
int main(void)
{
	int a = 0, b = 1, x = 0;
	int sum = 0;

	while (x < 4000000)
	{
		x = a + b;
		a = b;
		b = x;
		if (x % 2 == 0)
			sum += x;
	}
	printf("%i\n", sum);
	return (0);
}
