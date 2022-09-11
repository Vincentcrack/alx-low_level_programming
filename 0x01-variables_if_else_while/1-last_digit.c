#include <stdlib.h>
#include <unistd.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: print last digit
 *
 * Return: 0
 */
int main(void)
{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		int x = n % 10;
		if (x > 5)
		{
			printf("Last digit of %d is %d and is greater than 5\n", n, x);
		}
		else if (n == 0)
		{
			printf("Last digit of %d is %d and is 0\n", n, x);
		}
		else if (n < 6)
		{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, x);
		}
		return (0);
}
