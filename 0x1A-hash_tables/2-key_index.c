#include "hash_tables.h"
/**
 * key_index - gives index of a key
 * @key: pointer on key
 * @size: size of hash table
 * Return: hash value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hashed;

	hashed = hash_djb2(key);
	return (hashed % size);
}
