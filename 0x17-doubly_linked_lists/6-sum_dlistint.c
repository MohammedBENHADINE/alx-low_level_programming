#include "lists.h"
/**
 * sum_dlistint - get sum of list
 * @head: head of list
 * Return: sum of list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum = 0;

	if (h == NULL)
		return (0);
	current = h;
	while (current)
	{
		current = current->next;
		sum += current->n;
	}
	return (sum);
}
