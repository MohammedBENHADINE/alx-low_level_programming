#include "hash_tables.h"
/**
 * hash_table_create - create a hash table
 * @size: size of the hash table
 * Return: Pointer on the new created hash table or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newHashTable;
	hash_node_t **newArray;
	int i;

	if (size == 0)
		return (NULL);
	newHashTable = (hash_table_t *) malloc(sizeof(hash_table_t));
	if (!newHashTable)
		return (NULL);
	newHashTable->size = size;
	newArray = (hash_node_t **) calloc(size, sizeof(hash_node_t *));
	if (!newArray)
		return (NULL);
	newHashTable->array =  newArray;
	for (i = 0; i < (int) size; i++)
		newArray[i] = NULL;
	return (newHashTable);
}
