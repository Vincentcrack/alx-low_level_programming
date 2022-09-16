#include <unistd.h>

/**
 * _putchar - writes the character to stdout
 * @c: the char to print
 * Return 1 or 0
 * on error, -1 return.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
