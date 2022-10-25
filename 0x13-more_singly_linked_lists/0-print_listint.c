#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print elements of a singly liked list.
 * @h: Pointer to a list.
 * Return: int.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
