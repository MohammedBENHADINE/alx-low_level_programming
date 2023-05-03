#include "lists.h"
/**
 * print_listint - show all elements of list
 * @h: pointer to list
 * Return: number of nodes
 **/
size_t print_listint(const listint_t *h)
{
	const listint_t *node;
	size_t n;

	node = h;
	n = 0;
	while (node)
	{
		printf("%d\n", node->n);
		node = node->next;
		n++;
	}
	return (n);
}
