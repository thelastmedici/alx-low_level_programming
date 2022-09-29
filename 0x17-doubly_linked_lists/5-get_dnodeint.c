#include "lists.h"
/**
 *get_dnodeint_at_index - function to get index
 *@head: pointer to the head node
 *@index: index of the node
 *Return: if the node does not exist - NULL.
 *Otherwise - the address of the located node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
for (; index != 0; index--)
{
if (head == NULL)
return (NULL);
head = head->next;
}
return (head);
}
