#include "lists.h"

/**
 * delete_nodeint_at_index - Inserts a new node at a given position
 * @head: Pointer to address of a list
 * @index: Index of the node to delete
 * Return: 1 if success , -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *tempo = NULL;
	unsigned int i = 0;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
		return (1);
	}
	while (tmp->next)
	{
		if (i == index - 1)
		{
			tempo = tmp->next->next;
			free(tmp->next);
			tmp->next = tempo;
			return (1);
		}
		tmp = tmp->next;
		i++;
	}
	return (-1);
}
