#include "main.h"
/**
 * _strdup - allocate space for string
 * @str: pointer to string
 *
 * Return: pointer to string, or NULL if it fails
 */
char *_strdup(char *str)
{
	int len = 0;
	char *p = str;
	int i;

	if (str == NULL)
		return (NULL);
	while (*p != '\0')
	{
		len++;
		p++;
	}
	p = malloc(len * sizeof(char));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		*(p + i) = *(str + i) ;
	*(p + i) = '\0';
	return (p);
}
