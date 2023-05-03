#include "lists.h"
/**
 * listint_len - return length of list
 * @h: pointer to list
 * Return: number of nodes
 **/
size_t listint_len(const listint_t *h)
{
	const listint_t *node;
	size_t n;

	node = h;
	n = 0;
	while (node)
	{
		node = node->next;
		n++;
	}
	return (n);
}
