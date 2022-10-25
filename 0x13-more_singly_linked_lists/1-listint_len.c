#include "lists.h"

/**
 * listint_len - calculate the number of elements
 * @h: pointer to list
 * Return: int
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
