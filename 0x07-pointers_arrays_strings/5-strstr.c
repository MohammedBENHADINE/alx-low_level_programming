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
	char *p = haystack;
	char *q;
	char *found = NULL;

	while (*p != '\0')
	{
		if (*p == *needle)
		{
			found = p;
			q = needle;
			while (*p == *q && *q != '\0')
			{
				p++;
				q++;
			}
			if (*q != '\0')
				found = NULL;
			else
				break;
		}
		else
		{
			p++;
		}
	}
	return (found);
}
