#include "hash_tables.h"
/**
 * hash_table_set - add element to the hash table
 * @ht: pointer on hash table
 * @key: key of element
 * @value: value of element
 * Return: 1 if succeeded , 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newNode;
	unsigned long int idx;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (0);
	newNode = (hash_node_t *) malloc(sizeof(hash_node_t));
	if (newNode == NULL)
		return (0);
	newNode->key = (char *) malloc(strlen(key) + 1);
	newNode->value = (char *) malloc(strlen(value) + 1);
	strcpy(newNode->key, key);
	strcpy(newNode->value, value);
	idx = key_index((const unsigned char *)key, ht->size);
	if (ht->array[idx] == NULL)
	{
		newNode->next = NULL;
		ht->array[idx] = newNode;
	}
	else
	{
		newNode->next = ht->array[idx];
		ht->array[idx] = newNode;
	}
	return (1);
}
