#include "lists.h"

/**
 * print_listint - Prints all elements of a list
 * @head: Pointer to a list
 *
 * Return: Number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	
	if (h == NULL)
		return (98);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		++i;
	}
	return (i);
}
