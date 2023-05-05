#include "main.h"
/**
 * flip_bits - how much to flig bits
 * @n: number 1
 * @m: number 2
 * Return: number of flips needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int res = 0;
	unsigned long int temp;

	temp = n ^ m;
	while (temp)
	{
		res += temp & 1;
		temp = temp >> 1;
	}
	return (res);
}
