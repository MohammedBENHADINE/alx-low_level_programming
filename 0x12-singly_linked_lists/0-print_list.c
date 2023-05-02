#include "lists.h"
/**
 * print_list - show all elements of list
 * @h: pointer to list
 * Return: number of nodes
 **/
size_t print_list(const list_t *h)
{
	const list_t *node;
	size_t n;

	node = h;
	n = 0;
	while (node)
	{
		if (node->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", node->len, node->str);
		node = node->next;
		n++;
	}
	return (n);
}
