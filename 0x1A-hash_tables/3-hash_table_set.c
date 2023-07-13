#include "hash_tables.h"
/**
 * updateOrInsert - update or insert into basket
 * @ht: pointer on table
 * @idx: copy of idx
 * @node: pointer on new node
 * Return: 1 if done , 0 if error
 */
int updateOrInsert(hash_table_t *ht, unsigned long int idx, hash_node_t *node)
{
	hash_node_t *cur;

	cur = ht->array[idx];
	while (cur)
	{
		if (strcmp(cur->key, node->key) == 0)
		{
			free(cur->value);
			cur->value = (char *) malloc(strlen(node->value) + 1);
			strcpy(cur->value, node->value);
			free(node->value);
			free(node->key);
			free(node);
			return (1);
		}
		cur = cur->next;
	}
	node->next = ht->array[idx];
	ht->array[idx] = node;
	return (1);
}
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
	if (newNode->key == NULL)
	{
		free(newNode);
		return (0);
	}
	newNode->value = (char *) malloc(strlen(value) + 1);
	if (newNode->value == NULL)
	{
		free(newNode->key);
		free(newNode);
		return (0);
	}
	strcpy(newNode->key, key);
	strcpy(newNode->value, value);
	idx = key_index((const unsigned char *)key, ht->size);
	if (ht->array[idx] == NULL)
	{
		newNode->next = NULL;
		ht->array[idx] = newNode;
		return (1);
	}
	else
	{
		return (updateOrInsert(ht, idx, newNode));
	}
}
