#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates character
 * @s: pointer to string
 * @c: character to locate
 * Return: pointer to first occurence of c
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == c)
			return (s + i);
	if (s[i] == c)
		return (s + i);
	return (NULL);
}
