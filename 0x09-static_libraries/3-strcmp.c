#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Return: 0 if equal , -1 if s2 greater , 1 if s1 greater.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 >  *s2)
			return (*s1 - *s2);
		if (*s1 < *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}
