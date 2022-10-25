#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print elements of a singly liked list.
 * @h: Pointer to a list.
 * Return: int.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *tp;
	unsigned int cntr = 0;

	tp = h
	while (tp)
	{
		printf("%d\n", tp->n);
		cntr++;
		tp = tp->next;
	}
	return (cntr);
}
