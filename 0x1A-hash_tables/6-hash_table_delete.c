#include "hash_tables.h"
/**
 * hash_table_delete - print hash table
 * @ht: pointer of hash table
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *cur, *tmp;

	if (ht == NULL)
		return;
	if (ht->array == NULL)
	{
		free(ht);
		return;
	}
	for (i = 0; i < ht->size; i++)
	{	cur = ht->array[i];
		while (cur)
		{
			free(cur->value);
			free(cur->key);
			tmp = cur->next;
			free(cur);
			cur = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
