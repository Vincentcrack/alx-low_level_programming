#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - print string and new line
 * @separator: string separating
 * @n: number of string passed to function
 *
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *res;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		res = va_arg(strings, char *);
		if (res == NULL)
			res = "(nil)";
		printf("%s", res);
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(strings);
	printf("\n");
}
