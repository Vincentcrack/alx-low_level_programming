#include "main.h"
/**
 * _comparacadena - compare 2 strings
 * @s: first part
 * @p: second part
 * Return: 0
 */
int _comparacadena(char *s, char *p)
{
	if (*s == '\0')
		return (1);
	if (*s == *p)
		return (_comparacadena(++s, --p));
	else
		return (0);
}
/**
 * _ultima - this reverse the string
 * @s: char to check
 * Return: return to the pointer
 */
char *_ultima(char *s)
{
	if (*s != '\0')
		return (_ultima(++s));
	else
		rturn (--s);
}
/**
 * is_palindrome - the given function
 * _ultima - this will reverse the string
 * @s: char pointer
 * Return: 1
 */
int is_palindrome(char *s)
{
	char *p;
	p = _ultima(s);
	return (_comparacadena(s, p))
}
