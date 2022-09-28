#include "main.h"
/**
 * _memcpy - copies mem
 * @dest: char to check
 * @n: unsigned int
 * @src: char to check
 * Return: 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
		dest[x] = src[x];
	for (; x < n; x++)
		dest[x] = '\0';
	return (dest);
}
