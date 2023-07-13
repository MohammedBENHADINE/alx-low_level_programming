#include "hash_tables.h"
/**
 * hash_table_print - print hash table
 * @ht: pointer of hash table
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *cur;
	int flag = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{	cur = ht->array[i];
		while (cur)
		{
			printf("'%s': '%s'", cur->key, cur->value);
			cur = cur->next;
			if (cur)
				printf(",");
			flag = 1;
		}
		if (ht->array[i + 1] && flag)
			printf(",");
	}
	printf("}\n");
}
