#include "lists.h"
/**
 * pop_listint - pop the head
 * @head: pointer to list
 * Return: the value of head or 0 if NULL
 **/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int res = 0;

	if (*head == NULL)
		return (0);
	temp = (*head)->next;
	res = (*head)->n;
	free(*head);
	*head = temp;
	return (res);
}
