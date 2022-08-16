#include "lists.h"

/**
 * sum_listint- function that returns the sum of all data
 * @head: pointer to the head of the node
 *
 * Return: sum of all data, 0 if not exist
 */

int sum_listint(listint_t *head)
{
	int res = 0;

	while (head)

	{
		res += head->n;
		head = head->next;
	}
	return (res);
}
