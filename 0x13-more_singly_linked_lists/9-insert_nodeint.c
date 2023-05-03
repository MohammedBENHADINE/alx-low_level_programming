#include "lists.h"
/**
 * insert_nodeint_at_index - get sum of list
 * @head: pointer to list
 * @idx: index where to insert
 * @n: int
 * Return: pointer to new node or NULL
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *cursor;
	listint_t *new;
	unsigned int pos = 0;

	cursor = *head;
	if (idx == 0 && *head != NULL)
	{
		new = malloc(sizeof(listint_t));
		if (!new)
		{
			free(new);
			return (NULL);
		}
		new->n = n;
		new->next = *head;
		*head = new;
		return (*head);
	}
	while (cursor->next)
	{
		if (pos == idx - 1)
		{
			new = malloc(sizeof(listint_t));
			if (!new)
			{
				free(new);
				return (NULL);
			}
			new->n = n;
			new->next = cursor->next;
			cursor->next = new;
			return (new);
		}
		pos++;
		cursor = cursor->next;
	}
	return (NULL);
}
