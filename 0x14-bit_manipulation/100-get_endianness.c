#include "main.h"
/**
 * get_endianness - how much to flig bits
 * Return: 0 if big , 1 if little endian
 */
int get_endianness(void)
{
	unsigned long testor = 0x89ABCDEF;
	unsigned int *first = (unsigned int*) &testor;

	if (*first == 0x89AB)
		return (0);
	else
		return (1);
}
