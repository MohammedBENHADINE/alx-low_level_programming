#include "lists.h"
/**
 * free_listint2 - free a list
 * @head: pointer to list
 **/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int res = 0;
	if (*head)
		return (0);
	temp = *head;
	res = (*head)->n;
	free(*head);
	*head = (*head)->next;
	return (res);
}
