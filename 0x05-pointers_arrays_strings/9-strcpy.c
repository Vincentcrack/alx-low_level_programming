#include "main.h"
/**
 * _strcpy - copies the string
 * @dest: char type
 * @src: char typr
 * Description: copy the string pointed
 * the buffer pointed to
 * Return: pointer to 'dest'
 */
char *_strcpy(char *dest, char *src)
{
	int x = -1;

	do {
		x++;
		dest[x] = src[x];
	} while (src[x] != '\0');

	return (dest);
}
