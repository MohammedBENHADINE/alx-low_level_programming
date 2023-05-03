#include "lists.h"
/**
 * get_nodeint_at_index - pop the head
 * @head: pointer to list
 * @index: index of node
 * Return: pointer to node or NULL
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int count = 0;

	tmp = head;
	if (head == NULL)
		return (NULL);
	while (tmp)
	{
		if (count == index)
			return (tmp);
		count++;
		tmp = tmp->next;
	}
	return (NULL);
}
