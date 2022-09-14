#include "main.h"
/**
 * _isalpha - is the function
 * @c: char to check
 * Description: checks for lower char
 *
 * Return: 0
 */
int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
