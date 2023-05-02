#include "lists.h"
/**
 * add_node_end - add node to tail of list
 * @head: pointer to first pointer
 * @str: new str to add
 * Return: pointer to new list
 **/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *cursor;
	int count = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	if (str)
	{
		new->str = strdup(str);
		while (str[count] != '\0')
			count++;
		new->len = count;
	}
	else
	{
		new->str = NULL;
		new->len = 0;
	}
	new->next = NULL;
	if (*head)
	{
	cursor = *head;
	while (cursor->next != NULL)
		cursor = cursor->next;
	cursor->next = new;
	}
	else
		*head = new;
	return (*head);
}
