#include "main.h"
/**
 * get_endianness - how much to flig bits
 * Return: 0 if big , 1 if little endian
 */
int get_endianness(void)
{
	unsigned int testor = 14;

	if (testor & 1)
		return (1);
	else
		return (0);
}
