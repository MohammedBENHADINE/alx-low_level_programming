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
	int index;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);

				index++;

			} while (haystack[index] == needle[index]);
		}

		haystack++;
	}

	return ('\0');
}
