#include "main.h"
/**
 * _strcpy - copy strings
 * @dest: pointer char type
 * @src: pointer char type
 *
 * Description: copies the string pointed to by src, including
 *  the terminating null byte (\0), to the buffer pointed to by dest
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *p = src;
	char *q = dest;

	while (*p != '\0')
	{
		*q = *p;
		p++;
		q++;
	}
	*q = '\0';
	return (dest);
}
