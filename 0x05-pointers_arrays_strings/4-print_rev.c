#include "main.h"
#include <stdio.h>
/**
 * print_rev - print a string in backwards.
 * @s: pointer to string.
 */

void print_rev(char *s)
{
	int length;
	char *p;

	length = 0;
	p = s;

	while (*p++ != '\0')
		length++;

	while (length >= 0)
	{
		_putchar(*(s + length));
		length--;
	}
	_putchar('\n');
}

