#include "lists.h"
/**
 * add_dnodeint -  add node to header
 * @head: head of list
 * @n: number to add
 * Return: new head or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL || *head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->prev = NULL;
	new->next = *head;
	new->n = n;
	*head = new;
	(*head)->prev = new;
	return (new);
}
