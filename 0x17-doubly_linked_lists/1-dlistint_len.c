#include "lists.h"
/**
 * dlistint_len - get length of list
 * @h: head of list
 * Return: size of list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t len = 0;

	if (h == NULL)
		return (0);
	current = h;
	while (current)
	{
		current = current->next;
		len++;
	}
	return (len);
}
