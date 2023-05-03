#include "lists.h"

/**
 * reverse_listint - reverse list
 * @head: Pointer to address of a list
 *
 * Return: Address of the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *cursor = *head;
	listint_t *tmp, *prev;

	if (*head == NULL)
		return (NULL);
	if (cursor->next == NULL)
		return (*head);
	cursor = (*head)->next;
	prev = *head;
	(*head)->next = NULL;
	while (cursor && cursor->next)
	{
		tmp = cursor->next;
		cursor->next = prev;
		prev = cursor;
		cursor = tmp;
	}
	cursor->next = prev;
	*head = cursor;
	return (*head);
}
