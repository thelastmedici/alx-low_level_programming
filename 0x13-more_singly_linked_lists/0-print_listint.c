#include "list.h"

/**
 * print_listint - print all element of listint_t
 * @h: reference to the head list
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h);
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->n;
		count++;
	}
	return (count);
}
