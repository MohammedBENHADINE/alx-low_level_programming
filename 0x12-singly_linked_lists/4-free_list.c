#include "lists.h"
/**
 * free_list - free a list
 * @h: pointer to list
 **/
void free_list(list_t *head);
{
	list_t *cursor;

	cursor = head;
	while (cursor)
	{
		free(cursor->str);
		cursor = cursor->next;
		free(cursor);
	}
}
