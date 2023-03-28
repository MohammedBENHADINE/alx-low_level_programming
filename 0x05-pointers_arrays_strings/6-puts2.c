#include "main.h"
/**
 * puts2 - print other characters in a string.
 * @s: pointer to string.
 */

void puts2(char *s)
{
	char *p;

	p = s;
	while (*p != '\0' && *(p + 1) != '\0')
	{
		_putchar(*p);
		p = p + 2;
	}
	_putchar('\n');
}
