#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: pointer to dest string
 * @src: pointer to src string
 * @n: int
 *
 * Description: Appends at most n from src string to the dest string
 * Return: pointer to resulting dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *p;
	char *q;
	int i;

	p = dest;
	q = src;
	i = 0;
	while (*p != '\0')
		p++;
	while (*q != '\0' && i < n)
	{
		*p = *q;
		p++;
		q++;
		i++;
	}

	return (dest);
}
