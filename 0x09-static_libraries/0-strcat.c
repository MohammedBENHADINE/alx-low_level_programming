#include "main.h"

/**
 * _strcat - concatenates two strings..
 * @dest: pointer to dest string
 * @src: pointer to src string
 *
 * Description: Appends src string to the dest string
 * Return: pointer to resulting dest string
 */
char *_strcat(char *dest, char *src)
{
	char *p;
	char *q;

	p = dest;
	q = src;
	while (*p != '\0')
		p++;
	while (*q != '\0')
	{
		*p = *q;
		p++;
		q++;
	}

	return (dest);
}
