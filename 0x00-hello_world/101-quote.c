#include <stdio.h>
#include <unistd.h>


/**
 * main - Entry point
 * - Dora korpar, 2015-10-19
 * Description: display output without using printf name, puts name.
 * then a new line to thestandard error
 * Return: Always 0
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora korpar, 2015-10-19\n", 59);
	return (1);
}
