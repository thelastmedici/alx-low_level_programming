#include "lists.h"
/**
 * free_listint2 - free list
 * @head: pointer to the head that holds the sdress of the first node
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (!head)
		return;

	while (*head)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
	}
}
