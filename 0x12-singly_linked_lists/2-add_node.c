#include "lists.h"
/**
 * add_node - add node to head of list
 * @head: pointer to first pointer
 * @str: new str to add
 * Return: pointer to new list
 **/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newHead = NULL;
	
	if (str == NULL)
		return (NULL);
	
	newHead->str = strdup(str);
	newHead->len = strlen(str);
	newHead->next = *head;
	return (newHead);
}
