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
/**
 * _strpbrk - searches a string
 * @s: pointer to string
 * @accept: pointer to prefix bytes
 * Description: locates the first occurrence in the string s of
 * any of the bytes in the string accept
 * Return: pointer to the byte in s that matches one of the
 * bytes in accept, or NULL if no such byte is found
 **/
char *_strpbrk(char *s, char *accept)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if (_strchr(accept, s[i]))
			return (s + i);
	return (NULL);
}
