#include "main.h"
/**
 * get_length  - strlen-like
 * @str: pointer to str
 *
 * Return: length of str
 */
int get_length(char *str)
{
	char *p = str;
	int len;

	if (p)
		while (*p != '\0')
		{
			len++;
			p++;
		}
	else
		return (0);

	return (len + 1);
}

/**
 * str_concat - allocate space for 2  string
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 *
 * Return: pointer to new string, or NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
	int len, len1, len2 = 0;
	char *p, *q;
	int i;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	len1 = get_length(s1);
	len2 = get_length(s2);
	if (len2 == 0 || len1 == 0)
		len = len2 + len1;
	else
		len = len2 + len1 - 1;
	p = malloc(len * sizeof(char));
	if (p == NULL)
		return (NULL);
	q = p;
	if (len1)
	{
		for (i = 0; i < len1 - 1; i++)
			*(p + i) = *(s1 + i);
		p = p + i;
	}
	if (len2)
	{
		for (i = 0; i < len2; i++)
			*(p + i) = *(s2 + i);
	}
	return (q);
}
