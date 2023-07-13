#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value based on key
 * @ht: pointer of table
 * @key: key
 * Return: value or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *cur;
	unsigned long int idx;

	if (ht == NULL || key == NULL)
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);
	cur = ht->array[idx];
	if (cur == NULL)
		return (NULL);
	while (cur)
	{
		if (strcmp(cur->key, key) == 0)
			return (cur->value);
		cur = cur->next;
	}
	return (NULL);
}
