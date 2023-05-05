#include "main.h"
/**
 * get_endianness - how much to flig bits
 * Return: 0 if big , 1 if little endian
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *character = (char *) &x;

	return ((int)*character);
}
