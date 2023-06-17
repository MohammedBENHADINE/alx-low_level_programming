#include "lists.h"
/**
 * insert_dnodeint_at_index - insert at index
 * @h: head of list
 * @idx: index of node
 * @n: data
 * Return: pointer on node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current;
	dlistint_t *new;
	unsigned int pos = 0;

	if (h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	new->n = n;
	if (*h == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		*h = new;
		return (new);
	}
	else
	{
		current = *h;
		while (current)
		{
			if (idx == pos)
			{
				new->next = current;
				new->prev = current->prev;
				(current->prev)->next = new;
				current->prev = new;
				return (new);
			}
			current = current->next;
			pos++;
		}
	}
	return (NULL);
}
