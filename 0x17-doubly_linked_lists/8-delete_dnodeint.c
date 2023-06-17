#include "lists.h"
/**
 * delete_dnodeint_at_index - insert at index
 * @head: head of list
 * @index: index of node
 * @n: data
 * Return: 1 or -1
 */
dlistint_t *delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	dlistint_t *new;
	unsigned int pos = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	if (idx == 0)
	{
		head->next->prev = NULL;
		free(*head);
		*head = head->next;
		return (1);
	}
	else
	{
		current = *head;
		while (current)
		{
			if (index == pos)
			{
				if (current->next)
					current->next->prev = current->prev;
				if (current ->prev)
					current->prev->next = current->next;
				free(current);
				return (1);
			}
			current = current->next;
			pos++;
		}
	}
	return (-1);
}
