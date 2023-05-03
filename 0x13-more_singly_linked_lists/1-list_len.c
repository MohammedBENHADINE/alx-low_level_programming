#include "lists.h"
/**
 * list_len - return length of list
 * @h: pointer to list
 * Return: number of nodes
 **/
size_t list_len(const list_t *h)
{
	const list_t *node;
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
