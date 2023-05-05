#include "main.h"
/**
 * get_bit - get bit at index
 * @n: number
 * @index: index
 * Return: value of bit at index or -1 of error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int size;

	size = sizeof(n) * 8 - 1;
	if (index > size)
		return (-1);
	return ((n >> index) & 1);
}
