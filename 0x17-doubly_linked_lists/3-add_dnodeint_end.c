#include "lists.h"
/**
 * add_dnodeint_end -  add node to header
 * @head: head of list
 * @n: number to add
 * Return: new element or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *cur;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (*head != NULL)
	{
		cur = *head;
		while (cur->next)
			cur = cur->next;
		new->n = n;
		new->prev = cur;
		new->next = NULL;
		cur->next = new;
	}
	else
	{
		new->n = n;
		new->prev = NULL;
		new->next = NULL;
		*head = new;
	}
	return (new);
}
