#include "lists.h"
/**
 * delete_dnodeint_at_index - insert at index
 * @head: head of list
 * @index: index of node
 * @n: data
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int pos = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		(*head)->next->prev = NULL;
		current = (*head)->next;
		free(*head);
		*head = current;
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
