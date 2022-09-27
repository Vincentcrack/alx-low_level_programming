#include "main.h"
/**
 * _strlen - checks the length of a string
 * @x: string to check for
 * Return: int
 */
int _strlen(char *x)
{
	int length = 0;

	while (x[length])
		length++;
	return (length);
}
