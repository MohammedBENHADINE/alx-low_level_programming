#include "main.h"

/**
 * string_toupper - change lowercase to uppercase.
 * @s: pointer to first string
 *
 * Description: from lowerwase to uppercase.
 * Return: pointer to char.
 */
char *string_toupper(char *s)
{
	char *saved = s;

	while (*s != '\0')
	{
		if (*s >= 97 && *s <= 122)
			*s = *s - 32
		s++;
	}
	return (saved);
}
