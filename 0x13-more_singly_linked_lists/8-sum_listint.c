#include "lists.h"
/**
 * sum_listint - get sum of list
 * @head: pointer to list
 * Return: pointer to node or NULL
 **/
int sum_listint(listint_t *head);
{
	listint_t *tmp;
	int count = 0;

	tmp = head;
	while (tmp)
	{
		count += tmp->n;
		tmp = tmp->next;
	}
	return (count);
}
