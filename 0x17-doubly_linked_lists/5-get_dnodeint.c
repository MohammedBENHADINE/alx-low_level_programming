#include "lists.h"
/**
 * get_dnodeint_at_index - get node at index
 * @head: head of list
 * @index: index of node
 * Return: pointer on node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	size_t len = 0;

	if (head == NULL)
		return (0);
	current = head;
	while (current)
	{
		if (len == index)
			return (current);
		current = current->next;
		len++;
	}
	return (NULL);
}
