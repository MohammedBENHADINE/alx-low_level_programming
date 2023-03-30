#include "main.h"
/**
 * isSeparator - separator validator
 * @c: char
 *
 * Description: checks if c is a separator
 * Return: 1 if yes , 0 otherwise
*/
int isSeparator(char c)
{
	char separator[11] = {'\t', ' ', '\n', ',', '.', '!',
		'"', '(',  ')', '{', '}'};
	int i;

	for (i = 0; i < 11; i++)
		if (c == separator[i])
			return (1);
	return (0);
}
/**
 * cap_string - capitalize string.
 * @s: pointer to string
 *
 * Description: capitalize all words in a string.
 * Return: pointer to stri ng.
 */
char *cap_string(char *s)
{
	char *saved = s;

	if (*s >= 97 && *s <= 122)
		*s -= 32;
	s++;
	while (*s != '\0')
	{
		if (isSeparator(*(s - 1)) && *s >= 97 && *s <= 122)
			*s -= 32;
		s++;
	}
	return (saved);
}
