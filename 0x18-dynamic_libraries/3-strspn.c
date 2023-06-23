#include "main.h"
#include <stddef.h>
/**
 * _strspn - gets length of substring
 * @s: pointer to string
 * @accept: pointer to prefix bytes
 * Description: calculates the number of bytes in the initial
 * segment of s which consist only of bytes from accept
 * Return: number of bytes
 **/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	int bytes = 0;

	for (i = 0; s[i] != '\0'; i++)
		if (_strchr(accept, s[i]))
			bytes++;
		else
			return (bytes);
	return (bytes);
}
