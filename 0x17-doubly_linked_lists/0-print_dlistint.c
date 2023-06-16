#include "lists.h"
/**
 * print_dlistint - print elements of dlist
 * @h: head of list
 * Return: size of list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t len = 0;

	if (h == NULL)
		return (EXIT_FAILURE);
	current = h;
	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		len++;
	}
	return (len);
}
