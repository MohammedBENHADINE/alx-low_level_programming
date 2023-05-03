#include "lists.h"
/**
 * add_nodeint_end - add node to tail of list
 * @head: pointer to first pointer
 * @n: new int to add
 * Return: pointer to new list
 **/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *cursor;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head)
	{
	cursor = *head;
	while (cursor->next != NULL)
		cursor = cursor->next;
	cursor->next = new;
	}
	else
		*head = new;
	return (*head);
}
