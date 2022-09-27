#include "main.h"

/**
 * swap_int - swap the value of a,b
 * @a: first pointer
 * @b: second pointer
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
