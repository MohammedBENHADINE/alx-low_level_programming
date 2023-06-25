#include "main.h"
/**
 * _strlen - count str length in a string.
 * @s: pointer to string.
 *
 * Return: int, length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s++ != '\0')
		i++;

	return (i);
}

