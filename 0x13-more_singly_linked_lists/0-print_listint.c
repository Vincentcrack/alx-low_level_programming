#include "lists.h"

/**
 * print_listint - print elements of a singly liked list.
 * @h: Pointer to a list.
 * Return: int.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t count = 0;

	while (cursor != NULL)
	{
		printf("%d\n", cursor->n);
		count += 1;
		cursor = cursor->next;
	}
	return (count);
}
