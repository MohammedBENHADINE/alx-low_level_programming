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
	const listint_t *cursor = head;

	if (head == NULL)
		return (98);
	printf("%d\n", cursor->n);
	cursor = cursor->next;
	i++;
	while (cursor)
	{
		if (cursor == head)
			return (98);
		printf("%d\n", cursor->n);
		cursor = cursor->next;
		++i;
	}
	return (i);
}
