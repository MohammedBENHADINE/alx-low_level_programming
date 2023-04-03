#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates strnig in string
 * @haystack: pointer to string
 * @needle: pointer to string
 *
 * Description: finds the first occurrence of the substring
 * needle in the string haystack
 * Return: pointer to first substring
 **/
char *_strstr(char *haystack, char *needle)
{
	char *p;
	char *q;

	while (*haystack != '\0')
	{
		p = haystack;
		q = needle;

		while (*haystack != '\0' && *q != '\0' && *q == *p)
		{
			haystack++;
			q++;
		}
		if (!*q)
			return (p);
		haystack = p + 1;
	}
	return (0);
}
