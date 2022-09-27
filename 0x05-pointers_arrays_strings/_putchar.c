#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the char to print
 *
 * Return: 1.
 * On error, -1 is returned, and errno is set.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}