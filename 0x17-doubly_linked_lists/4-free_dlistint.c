#include "lists.h"
/**
 * free_dlistint - free a list
 * @head: pointer on head
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *cur;

	cur = head;
	while (head)
	{
		cur = head;
		head = head->next;
		free(cur);
	}
}
