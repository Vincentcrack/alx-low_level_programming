#include <unistd.h>
/**
 *_putchar - writes char c to standard output
 *@c: the char to print
 *
 * Return: 1
 * on erro, 1 is returned, and errno is set approximately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
