#include "main.h"
/**
 * print_rev - print a string in backwards.
 * @str: pointer to string.
 */

void print_rev(char *str)
{
	char *z = str;
	int i;
	int count = 0;

	while (*str != '\0')
	{
		str++;
		count++;
	}

	i = count - 1;
	while (i >= 0)
	{
		_putchar(*(z + i));
		i--;
	}
	_putchar('\n');
}
