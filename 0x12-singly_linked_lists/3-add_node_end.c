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
	list_t *temp;
	
	temp = *head;
	while (temp->next)
		temp = temp->next;
	
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	temp->next = new;
	return (*head);
}
