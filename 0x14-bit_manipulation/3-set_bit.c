#include "main.h"
/**
 * set_bit - set bit at index
 * @n: number
 * @index: index
 * Return: 1 if worked -1 of error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int size;

	size = sizeof(*n) * 8 - 1;
	if (index > size)
		return (-1);
	*n |= 1 << index;
	return (1);
}
