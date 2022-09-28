#include "main.h"
/**
 * _memcpy - copies mem
 * @dest: char to check
 * @src: unsigned int
 * Return: 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (a = 0; x < n && src[x] != '\0'; x++)
		dest[x] = src[x];
	for (; x < n; x++)
		dest[a] = '\0';
	return (dest);
}
