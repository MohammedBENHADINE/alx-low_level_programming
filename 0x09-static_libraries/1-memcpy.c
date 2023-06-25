#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: pointer to dest memory area
 * @src: pointer to src memory area
 * @n: size of memory area
 * Description: copies n bytes from memory area src to memory area dest
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
