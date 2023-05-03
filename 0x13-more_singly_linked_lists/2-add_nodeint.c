#include "lists.h"
/**
 * add_nodeint- add node to head of list
 * @head: pointer to first pointer
 * @n: new int to add
 * Return: pointer to new list
 **/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newHead;

	newHead = malloc(sizeof(listint_t));
	if (newHead == NULL)
		return (NULL);
	newHead->n = n;
	newHead->next = *head;
	*head = newHead;
	return (newHead);
}
