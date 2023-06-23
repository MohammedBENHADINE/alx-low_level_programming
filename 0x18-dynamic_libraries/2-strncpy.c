#include "main.h"

/**
 * _strncpy - copies string to another.
 * @dest: pointer to dest string
 * @src: pointer to src string
 * @n: int
 *
 * Return: pointer to resulting dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *p;
	char *q;
	int i;

	p = dest;
	q = src;
	i = 0;
	while (*q != '\0' && i < n)
	{
		*p = *q;
		p++;
		q++;
		i++;
	}
	if (*q == '\0')
		while (i < n)
		{
			*p = '\0';
			p++;
			i++;
		}
	return (dest);
}
