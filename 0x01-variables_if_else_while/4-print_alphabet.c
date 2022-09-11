#include <stdio.h>
#include <unistd.h>
/**
 * main -Entry point
 *
 * Description: selecting chars
 *
 * Return: 0
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 'e' && x != 'z')
		{
			putchar(x);
		}
		else
		{

		}
	}
	putchar('\n');
	return (0);
}
